/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

int Linear_Search(int arr[], int size,int toFind){
  for (int i = 0; i < size;i++){
    if(arr[i]==toFind){
      return i;
    }
  }
  return -1;
  
}

int main(){
  int size = 6;
  //-----This was my try without starting the lecture and I did it correctly , hurrahhhhh..!--------------
  int array[size] = {3, 23, 42, 23, 45, 99};
  cout << "The number 99 is at index " << Linear_Search(array, 6, 999) << endl;

  cout << "if index is -1 means not exist in the array" << endl;
  //--------------------------------------------


  return 0;
}

/*
Talha linear search is actually a fixed algorithm
1st --- in the above program I have to make a function that searchs for a number in an array and we have to return its index (that is a simple ).


While learning linear search, I am trying to understand its time complexity in the easiest way:

The function checks the array from left to right, one element at a time. If it finds
the target, it returns that element's index immediately. If it reaches the end without
finding the target, it returns -1.

Let n be the number of elements in the array:
- Best case: O(1), when the target is the first element (only one check).
- Average case: O(n), because it may need to check about half the array.
- Worst case: O(n), when the target is last or is not in the array (up to n checks).

So, as the array gets larger, the work in the worst case grows in proportion to its
size. The function uses O(1) extra space because it only needs a few variables,
regardless of the array size.
*/