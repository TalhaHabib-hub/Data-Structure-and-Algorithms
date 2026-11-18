/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
/*Talha what we have to do is to find the element which has the highest frequency in the vector*/
#include <iostream>
#include <vector>
using namespace std;

class number_activity
{
public:
  int majority_find(vector<int> nums)
  {
    for (int i : nums)
    {
      int feq = 0;
      for (int j : nums)
      {
        if (i == j)
        {
          ++feq;
        }
      }
      if (feq >= (nums.size() / 2))
      {
        return i;
      }
    }
  } 
};

int main()
{
  vector<int> nums = {4, 8, 8, 4, 9, 8}; // Talha Teachers brutt force is not working for this array (Teacher just use > not >=)
  // vector<int> nums = {4, 8, 8, 4, 8, 8,9};// Talha Teachers brutt force is working for this one because the question was saying there will only be one majority element so in that case in the condition if we just replace > with >= it will work for all those sorts vectors.
  // Talha there is an optimized way to solve it which is in the next file here time complexity big of n is 2 because nested loop is used
  number_activity n1;
  cout<<"The majority element is : "<< n1.majority_find(nums);

  return 0;
}