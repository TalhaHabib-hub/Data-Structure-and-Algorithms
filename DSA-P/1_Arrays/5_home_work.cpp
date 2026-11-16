/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
#include <climits>
using namespace std;
/*Q1--> write a function to calculate sum and product of all numbers in an array.*/
void sum_product_of_array(int arr[], int size)
{
  int sum = 0, prd = 1;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
    prd *= arr[i];
  }
  cout << "Answere 1:" << endl;
  cout << "The sum of the array is -> " << sum << endl;
  cout << "The product of the array is -> " << prd << endl;
}

/*Q2--> write a function to swap the max and min number of an array
 */
void swap_min_max(int arr[], int sz)
{
  int max = INT_MIN;
  int min = INT_MAX;
  int max_idx, min_idx;

  for (int i = 0; i < sz; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
      max_idx = i;
    }
    if (min > arr[i])
    {
      min = arr[i];
      min_idx = i;
    }
  }
  swap(arr[max_idx], arr[min_idx]);
}
// Q3 --> write a function to print all unique values in an array
void unique_value_in_array(int arr[], int size)
{
  cout << "Answere 3:" << endl;
  for (int i = 0; i < size; i++)
  {
    bool temp = true;
    for (int j = 0; j < size; j++)
    {
      if (i != j)
      {
        if (arr[i] == arr[j])
        {
         temp = false;
        }
      }
    }
    if(temp){
      cout<<arr[i]<<" is unique in the array "<<endl;
    }
  }
}

/*
Q4--> write a function to print intersection of 2 arrays
*/

void intersecting_element(int arr1[], int arr2[], int sz1, int sz2){
  for (int i = 0; i < sz1;i++){
    for (int j = 0; j < sz2;j++){
      if(arr1[i]==arr2[j]){
        cout << arr1[i] << " is an intersecting element." << endl;
      }
    }
  }
}
int main()
{
  int size = 7;
  int array[size] = {3, 2, 4, 4, 2, 9, -2};
  sum_product_of_array(array, size);
  // -----------------------------------
  cout << "Answere 2: \nFrom this -> ";
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
  cout << "To this   -> ";
  swap_min_max(array, size);
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
  //--------------------------------------
  unique_value_in_array(array, size);
 //----------------------------------------
  int size2 = 5;
  int array2[size2]={3,4,1,32,98};
  cout << "Answere 4:" << endl;
  intersecting_element(array, array2, size, size2);
  return 0;
}