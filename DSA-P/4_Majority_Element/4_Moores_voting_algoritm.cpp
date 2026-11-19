/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<vector>
using namespace std;

class playing_moores{
  public:
  int majority_elment(vector<int>nums){
    int feq = 0,ans = 0;
    for (int i=0; i<nums.size();i++)
    {
      if(feq==0){
        ans = nums[i];
      }
      if(ans == nums[i]){
        feq++;
      }else{
       --feq;
      }
      cout << "current : " << nums[i] << endl;
      cout << "answer: " << ans << endl;
      cout << "feq: " << feq << endl;
      // Talha nice thing is frequency will not be negative because new one is assign (though it is once) at line 13 and because of that line 15th line condition gets correct and feq++ executes even the current value is once in the array(the previous value had reduced it by --1 ){to prove what I am saying is correct just feq=2 and the condition at line feq==2 then the frequency will not come below 2}, heads off to mr moorly
      cout << endl;
    }
    return ans;
  }
};
int main(){// moores algorithm time complexity is big of n
  playing_moores n;
  vector<int> numbers = {4, 3, 9,8,10,2,2, 2, 2, 2, 2, 2};
  cout << "The majority element is : " << n.majority_elment(numbers);
  return 0;
}ko