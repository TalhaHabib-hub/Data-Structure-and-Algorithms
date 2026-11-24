#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 4;
    const int elementSize = sizeof(int);
    const int baseAddress = 1000;

    int array[rows][columns]{};

    // Find the physical address of array[2][1].
    const int row = 2;
    const int column = 1;
    array[row][column] = 42;

    // C++ stores 2D arrays in row-major order.
    const int elementsToSkip = row * columns + column;
    const int physicalAddress =
        baseAddress + elementsToSkip * elementSize;

    std::cout << "Logical element: array[" << row << "][" << column << "]\n";
    std::cout << "Element value: " << array[row][column] << '\n';
    std::cout << "Physical address: " << baseAddress << " + ("
              << elementsToSkip << " * " << elementSize << ") = "
              << physicalAddress << '\n';
}

// For int array[3][4], the address of array[2][1] is:
// BA + (number_of_rows_to_skip * number_of_columns
//      + number_of_elements_to_skip) * size
// = 1000 + (2 * 4 + 1) * 4
// = 1036