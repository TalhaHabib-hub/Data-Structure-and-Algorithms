/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
  // through xor operation Talha we have to find the unique number in the vector
  vector<int> numbers = {3, 3, 4, 5, 5, 6, 6};
  int num=0;
  for(int i: numbers){
    num ^= i;
  }
  cout << "The unique number is: " << num;
  return 0;
}