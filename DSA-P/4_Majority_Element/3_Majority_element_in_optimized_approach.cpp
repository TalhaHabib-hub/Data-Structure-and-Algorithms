/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class number_activity
{
public:
  int majority_find(vector<int> nums)
  { 
    
    int ans = nums[0];
    int frq = 1;

    sort(nums.begin(), nums.end());
    for (int i : nums){
      cout << " " << i << " ";
    }

    for (int i = 1; i < nums.size(); i++){
      if (nums[i] == nums[i - 1]){
        frq++;
        if (frq > (nums.size() / 2)){
          ans = nums[i];
          return ans;
        }
      }else {
        frq = 1;
      }
  }
 }
};

int main()
{
  vector<int> nums = {4, 8, 8, 4, 8, 8, 9, 8};
  number_activity n;
  cout << "\n"
       << n.majority_find(nums) << " is the majority element" << endl;

  return 0;
}