/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
  // understanding vectors behavoir at memory allocation.
  vector<int> numbers = {3, 34, 5, 2};
  cout << "size of array --> "<<numbers.size() << endl;
  cout << "capacity --> "<<numbers.capacity() << endl;
  numbers.push_back(33);
  cout << "size of array --> "<<numbers.size() << endl;
  cout << "capacity --> "<< numbers.capacity() << endl;
  return 0;
}

// Talha to the vectors the memory is allocated at runtime  because its size can change 
// Talha arrays memory allocation happens as static allocation, so arrays memory allocates at stack and that of vectors occurs at heap