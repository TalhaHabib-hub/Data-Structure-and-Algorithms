#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 4;
    const int depth = 2;
    const int elementSize = sizeof(int);
    const int baseAddress = 1000;

    int array[rows][columns][depth]{};

    // Find the physical address of array[2][3][1].
    const int i = 2;
    const int j = 3;
    const int k = 1;
    array[i][j][k] = 42;


// Talha sir did BA + (planes_to_skip*9 + number_of_rows_to_Skip * 3 + number_of_element_to_Skip)*size 

    // C++ stores multidimensional arrays in row-major order.
    const int elementOffset = i * (columns * depth) + j * depth + k;
    const int physicalAddress = baseAddress + elementOffset * elementSize;

    std::cout << "Logical element: array[" << i << "][" << j << "][" << k
              << "]\n";
    std::cout << "Element value: " << array[i][j][k] << '\n';
    std::cout << "Element offset: " << elementOffset << " elements\n";
    std::cout << "Element size: " << elementSize << " bytes\n";
    std::cout << "Physical address: " << baseAddress << " + ("
              << elementOffset << " * " << elementSize << ") = "
              << physicalAddress << '\n';
}

// For array[2][3][1] in int array[3][4][2], using row-major order:
// columns = 4 (number of elements in the second dimension)
// depth = 2 (number of elements in the third dimension)
// i = 2 (first-dimension index), j = 3 (second-dimension index),
// k = 1 (third-dimension index)

// Address = base + (i * columns * depth + j * depth + k) * elementSize
//         = 1000 + (2 * 4 * 2 + 3 * 2 + 1) * 4
//         = 1000 + 23 * 4
//         = 1092

// 1D example: int array[5], find the address of array[3].
// number_of_elements_to_skip = 3
// Address = BA + (number_of_elements_to_skip) * size
//         = 1000 + (3) * 4
//         = 1012

// 2D example: int array[3][4], find the address of array[2][1].
// number_of_columns = 4
// number_of_rows_to_skip = 2, number_of_elements_to_skip = 1
// Address = BA + (number_of_rows_to_skip * number_of_columns
//                 + number_of_elements_to_skip) * size
//         = 1000 + (2 * 4 + 1) * 4
//         = 1036