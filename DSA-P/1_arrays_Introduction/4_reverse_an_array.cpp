/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

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
  return 0;
}