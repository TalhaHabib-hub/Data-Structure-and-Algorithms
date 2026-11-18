#include<iostream>
using namespace std;
int main(){

  int a = 6;
  int array[3] = {3, 2, 9};
  cout << array << endl;
  cout <<*(array+0) << endl;
  cout <<array+1<< endl;
}
// logical addresses and physical addresses definition in easy words
// Address
// |-- Logical address: the address the program uses
// `-- Physical address: the actual location in RAM
//     `-- The MMU (Memory Management Unit) is hardware that translates a
//         program's address into the actual RAM location
//
// why do we start array indexing  from 0 for efficiency , 
// I will explain interm of both logical address and physical here we go
//
// Array indexing
// |-- arr[0] is the first item: start at the beginning and move 0 items
// |-- arr[1] is the second item: start at the beginning and move 1 item
// `-- arr[i] means move i items from the beginning
//     `-- The distance moved in memory is called an offset
//
// Why start indexing at 0?
// |-- An index tells how many items to move from the beginning
// `-- The first item needs no move, so its index is 0
//
// How the computer finds and stores an item
// |-- The CPU starts at the array's first location and moves to the item
// |-- The distance moved (the offset) helps it find the item's address
// |-- The MMU translates that address into the actual location in RAM
// `-- To store a value, the computer writes it at that RAM location