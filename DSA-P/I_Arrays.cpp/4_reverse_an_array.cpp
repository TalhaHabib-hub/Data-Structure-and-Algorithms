/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

//This was my try---and I got the required
void reverse_arr(int array[],int size){
  int temp[size];
  for (int i = 0; i < size;i++){
    temp[size - i -1] = array[i];
    cout << "size - i - -1 --->" << size - i - 1<< endl;
  }
  for (int i = 0; i < size;i++){
    array[i] = temp[i];
  }
  
}

// but Talha teacher did it in different way
// you were unaware of the swap function that swaps the values at there given values
// Talha teacher calls it two pointer approach
void Teacher_reversing_array(int arr[], int sz){
  int start = 0, end = sz - 1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){
  int size = 5;
  int arr[size] = {1, 2, 3, 4, 5};
  cout << "before reversing " << endl;
  for (int i = 0; i < size; i++){
    cout << " " << arr[i] << " ";
  }
  cout << endl;
  cout << "after reversing " << endl;
  reverse_arr(arr, size);
  for (int i = 0; i < size; i++){
    cout << " " << arr[i] << " ";
  }
  cout << endl;
  //----------------------------------------
  cout << "This below one calls the teachers logic" << endl;
  Teacher_reversing_array(arr, size);
  for (int i = 0; i < size; i++){
    cout << " " << arr[i] << " ";
  }
  cout << endl;
  return 0;
}