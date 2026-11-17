#include<iostream>
using namespace std;

void array_update(int arr[], int size){
  for (int i = 0; i < size;i++){
    arr[i] = arr[i] * 2;
  }
}

int main(){
  int array[5] = {3, 5, 7, 9, 11};
  array_update(array, 5);
  for (int i = 0; i < sizeof(array)/4;i++){
    cout << array[i] << " " << endl;
  }
  // cout << *(array + 1)<<endl;
  // cout<<*(array);<<endl; // this proves that array is a pointer
  cout << endl;
}