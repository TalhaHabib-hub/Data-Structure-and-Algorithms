// Array continuing:
/*
ram is bite accessible
addresses : logical and physical
*/
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<iomanip>
#include<cstdint>
using namespace std;


/*
don't worry talha the question was written on the board by teacher
Arr[2][4]= bA + (0*3+2)*4 = 1008


*/
int main(){
  int arr[4] = {3,2,9,4};
  int arr2[2][3] = {{3, 2, 7}, {8, 5, 9}};
  // row major and colomn major

  // 1. &arr2[1][2] gets the address of the element in row 1, column 2.
  //    arr2[1][2] is the value 9, and &arr2[1][2] is its memory address.
  int* elementPointer = &arr2[1][2];

  // 2. reinterpret_cast changes the pointer type to an integer type.
  //    The address is stored as a number so it can be printed in hexadecimal.
  uintptr_t address = reinterpret_cast<uintptr_t>(elementPointer);

  // 3. Printing in hexadecimal shows the address, for example: 0x61fef4.
  cout << "Address: 0x" << hex << address << '\n';

  // 4. reinterpret_cast changes the integer back into an int pointer.
  //    * reads the value stored at that address; here it reads 9.
  cout << "Dereferenced value: "
       << *reinterpret_cast<int*>(address) << '\n';

  /*
       1D array: A linear list of values.
         Example: int a[3] = {1, 2, 3};
       2D array: A collection of 1D arrays arranged in rows and columns.
         Example: int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
       3D array: A collection of 2D arrays, like multiple tables or layers.
         Example: int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
       4D array: A collection of 3D arrays.
         Example: int a[2][2][2][2] = {};
       5D array: A collection of 4D arrays.
         Example: int a[2][2][2][2][2] = {};
     */

  /*
    1D in physics: Motion or position along a single straight line.
      Example: An object moving only along the x-axis.
    2D in physics: Position or motion on a flat plane.
      Example: An object moving on an x-y plane.
    3D in physics: Position or motion in ordinary space.
      Example: An object has x, y, and z coordinates.
    4D in physics: Three spatial dimensions plus time.
      Example: Position and time are represented as (x, y, z, t).
    5D in physics: Four-dimensional spacetime with one additional dimension.
      Example: (x, y, z, w, t), where w is a hypothetical extra spatial dimension.
  */

  /*
    Real physics definition of time:
      Time is a coordinate used to describe when events occur and their sequence.
      It is measured by observing repeatable physical changes, such as atomic vibrations,
      pendulum swings, or a clock's ticks.
      In classical physics, time is independent of position and motion.
      In Einstein's relativity, time is linked with space and can pass differently for
      observers moving relative to one another or in different gravitational fields.
      Time is the fourth coordinate of spacetime: (x, y, z, t).
      Example: Two synchronized clocks give different elapsed times after one clock
      travels at a very high speed and returns.
  */
  return 0;
}