#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Array is DS" << endl;

    // 1. Declare an array with space for five integers.
    int marks[5];

    // 2. Declare an array and provide all five values.
    int people_count[5] = {23, 232, 32, 21, 43};

    // 3. Let C++ determine the array size from the provided values.
    int books_count[] = {32, 323, 23};

    // Accessing array elements
    cout << "books_count element at 0: " << books_count[0] << endl;
    cout << "books_count element at 1: " << books_count[1] << endl;
    cout << "books_count element at 2: " << books_count[2] << endl;

    // cout << books_count[-1] << endl; // Not a valid array index.
    // This is out of bounds; reading it has undefined behavior.
    cout << "people_count element at -1: " << people_count[-1] << endl;

    cout << endl;

    // sizeof reports the array's size in bytes.
    cout << "sizeof --> books_count array: " << sizeof(books_count)
         << " -> total size of the array in bytes" << endl;
    cout << "sizeof --> people_count array: " << sizeof(people_count) / 4
         << " -> number of elements, assuming each int is 4 bytes" << endl;

    cout << endl;

    // Loop through the array and print each element.
    for (int i = 0; i < sizeof(people_count) / 4; i++) {
        cout << "element #" << i << " is -> " << people_count[i] << endl;
    }

    cout << endl;

    // Example: read values into an array from the user.
    /*
    int number[4];
    for (int i = 0; i < sizeof(number) / 4; i++) {
        cout << "give element #" << i << " of number_array -> ";
        cin >> number[i];
    }
    cout << endl;
    */

    // Find the smallest and largest values in an array.
    int max_min[] = {7, 9, 3, -33, 5, 4, 12, 332};
    int largest = INT_MIN;
    int smallest = INT_MAX; // Start with the largest possible int.

    // First attempt: nested loops. This works, but checks values repeatedly.
    // for (int i = 0; i < sizeof(max_min) / 4; i++) {
    //     for (int j = 0; j < sizeof(max_min) / 4; j++) {
    //         if (largest != max_min[j]) {
    //             if (largest < max_min[j]) {
    //                 largest = max_min[j];
    //             }
    //             if (smallest > max_min[j]) {
    //                 smallest = max_min[j];
    //             }
    //         }
    //     }
    // }

    // A single loop is enough to find both values.
    // for (int i = 0; i < sizeof(max_min) / 4; i++) {
    //     if (largest < max_min[i]) {
    //         largest = max_min[i];
    //     }
    //     if (smallest > max_min[i]) {
    //         smallest = max_min[i];
    //     }
    // }

    // Using max() and min() makes the comparisons more concise.
    for (int i = 0; i < sizeof(max_min) / 4; i++) {
        largest = max(largest, max_min[i]);
        smallest = min(smallest, max_min[i]);
    }

    cout << "largest -> " << largest << endl;
    cout << "smallest -> " << smallest << endl;

    // Find the indexes of the largest and smallest values.
    int index_of_largest = 0;
    int index_of_smallest = 0;

    for (int i = 0; i < sizeof(max_min) / 4; i++) {
        if (max_min[i] == largest) {
            index_of_largest = i;
        }
        if (max_min[i] == smallest) {
            index_of_smallest = i;
        }
    }

    cout << "index of largest -> " << index_of_largest << endl;
    cout << "index of smallest -> " << index_of_smallest << endl;

    // Find the indexes directly, without first storing the largest/smallest values.
    int index_of_largest_2 = 0;
    for (int i = 0; i < sizeof(max_min) / 4; i++) {
        if (max_min[i] > max_min[index_of_largest_2]) {
            index_of_largest_2 = i;
        }
    }
    cout << "index of largest (method 2) -> " << index_of_largest_2 << endl;

    // Use the same approach to find the index of the smallest value.
    int index_of_smallest_2 = 0;
    for (int i = 0; i < sizeof(max_min) / 4; i++) {
        if (max_min[i] < max_min[index_of_smallest_2]) {
            index_of_smallest_2 = i;
        }
    }
    cout << "index of smallest (method 2) -> " << index_of_smallest_2 << endl;
}

/*
Data structures are used to store data.

Data can be:
- Linear, like a single line.
- Hierarchical, like branching.

Different kinds of data can be stored in different data structures.

Algorithm:
The steps or operations performed on data.

Arrays:
- Store elements of the same type.
- Store elements in a linear arrangement.
- Store elements contiguously in memory.

Syntax:
type_of_array identifier[size];
*/
