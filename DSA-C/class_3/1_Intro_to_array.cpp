// array is a linera data strcuture that store collection of elements of same data type in contigous memory locations
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

int main(){
  // i and j are separate variables, so their nearby (here, 4-byte-spaced)
  // addresses are incidental; unlike array elements, C++ does not guarantee
  // that separate variables are contiguous. Array elements are contiguous.

  int i = 6,j= 3;
  cout << &i << " and " << &j << endl;
  int array[2] = {2,3};
  cout << &array[0] << " and " << &array[1] << endl;

  // output of line 12//0x61ff0c and 0x61ff08
  // output of line 14//0x61ff00 and 0x61ff04
  // Pass by value (int x) gives a function a copy; changes don't affect the caller.
  // Pass by reference (int& x) refers to the caller's original variable; changes affect it.
  // Example:
  // void changeValue(int x) { x = 10; }       // changes only the copy
  // void changeReference(int& x) { x = 10; } // changes the original variable
  // int number = 5;
  // changeValue(number);     // number is still 5
  // changeReference(number); // number is now 10
  
  // Arrays are not passed by reference by default: int values[] becomes int* values.
  // The pointer is copied, but it points to the original array elements.
  // Example:
  // void changeFirst(int values[]) { values[0] = 99; }
  // int nums[2] = {1, 2};
  // changeFirst(nums); // nums[0] is now 99
  return 0;
}