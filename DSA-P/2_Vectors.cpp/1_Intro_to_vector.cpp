/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
  //vector syntax
  //first:
  vector<int> vec;// printing vec[0] will show us segmentation error (mean seraching a memory address that doen't exits).
  vec = {3, 2, 5, 6, 3};
  cout << vec[3]<<endl;
  //second:
  vector<int> vec2 = {2, 4, 1};
  //third:
  vector<int> vec3(3, 0); // the first is the size of the vectore and second is the element on each index;
  cout << vec3[2]<<endl;
  cout << vec3[1]<<endl;
  cout << vec3[0]<<endl;

  // Talha the special loop for the vector is the foreach loop
  for(int i:vec){
    cout << i << " ";
  }
  cout<<endl;

  return 0;
}