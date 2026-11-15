/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// This was my try before lecture to find the sub array that gives the max_sum and i did it

#include<iostream>
#include<climits>
using namespace std;

int main(){
  //---------------------------------------------------------------
  int arr[7] = {3, -2, 9, -5, 8, -4, 1};
  int max_sum = INT_MIN;
  int temp = 0;
  for (int i = 0; i < 7;i++){
    for (int j = i; j < 7;j++){
      for (int k = i; k < j;k++){
        temp += arr[k];
      }
      if(max_sum<temp){
        max_sum = temp; 
      }
      temp = 0;
    }
  }
  cout << "The maximum sum of any subarray is " << max_sum << endl;

  for (int i = 0; i < 7;i++){
    for (int j = i; j < 7;j++){
      for (int k = i; k < j;k++){
        temp += arr[k];
      }
      if(temp==max_sum){
        int i_noted = i;
        int j_noted = j;
        for (int i = 0; i < 7; i++){
          for (int j = i; j < 7; j++){
            for (int k = i; k < j; k++){

              if(i==i_noted && j==j_noted)
                  cout << arr[k] <<" ";
            }
          }
          if(i==i_noted && j==j_noted)
          cout << " is the Max_sum_sub_array giver." << endl;
        }
      }
      temp = 0;
    }
  }
   //---------------------------------------------------------------
  //  Talha I did the above but teacher was saying it is good to do it with two loops lets see how (this is my second try)

  int max_count = INT_MIN;
  for (int i = 0; i < 7;i++)
  {
    int count_temp = 0;
    for (int j = i; j < 7;j++){
      cout << arr[j] << " ";
      count_temp += arr[j];
      max_count =  max(max_count, count_temp);
    }
    cout << endl;
  }
   cout << "The max_count of any sub_Array is " << max_count << endl;  

  for (int i = 0; i < 7;i++){
    for (int j = i; j < 7;j++){
      for (int k = i; k < j;k++){
        temp += arr[k];
      }
      if(temp==max_count){
        int i_noted = i;
        int j_noted = j;
        for (int i = 0; i < 7; i++){
          for (int j = i; j < 7; j++){
            for (int k = i; k < j; k++){

              if(i==i_noted && j==j_noted)
                  cout << arr[k] <<" ";
            }
          }
          if(i==i_noted && j==j_noted)
          cout << " is the Max_sum_sub_array giver." << endl;
        }
      }
      temp = 0;
    }
  }

 // Talha but it can be done by further optimized way using kadan's Algorithm which is in the next file 
  return 0;
}