/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<climits>
using namespace std;

int main(){
  int arr[7] = {3, -2, 9, -5, 8, -4, 1};
  int arr3[5] = {-3, -2, -5, -9, -7};
  int temp = 0, max_sum = INT_MIN;
  for (int i = 0; i < 5;i++){
    cout << "arr's  : "<<i<<" is " << arr3[i] << endl;
    temp += arr3[i];
    cout << "temp : " << temp << endl;
    max_sum = max(max_sum, temp);
    cout << "max_sum : " << max_sum << endl;
    temp = temp < 0 ? 0 : temp;
    cout << endl;

  }
  cout << "The max_count of any sub_Array is " << max_sum;
  return 0;
}