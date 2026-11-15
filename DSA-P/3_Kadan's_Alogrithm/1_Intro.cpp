/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

int main(){
  int size = 7;
  int array[size]= {3, 2, 6, 1, 4, 9, 7};
  for (int i = 0; i < size; i++){
    for (int j = i; j < size;j++){
      for (int k = i; k <= j;k++){
        cout << array[k];
      }
      cout << " ";
    }
    cout << endl;
  }
    return 0;
}