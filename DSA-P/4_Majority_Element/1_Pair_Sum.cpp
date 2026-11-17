/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
/* Talha return pair in sorted array with target sum.*/
// Talha what teacher is saying that you have to find the sum of a sub array that is equal to the targeted value and you have to return that array or the index for those element which are giving you that sum , and Teacher  also mentioned that those array actuall one will be in ascending or descending array you have to solve that before the lecture even starts.
// Talha minimize to understand the below given comments

#include <iostream>
#include <vector>
using namespace std;

vector<int> vect_target_Sum(vector<int> vect, int size, int target)
{
  vector<int> temp = {};
  for (int i = 0; i < size; i++)
  {
    for (int j = 1 + i; j < size; j++)
    { // Talha instead of i+1 or 1+i -->i++ or ++i is not working why?
      if ((vect[i] + vect[j]) == target)
      {
        temp.push_back(i);
        temp.push_back(j);
        return temp;
      }
    }
  }
}

vector<int> obtimized_way_vts(vector<int> vect, int size, int target)
{
  int i = 0, j = size - 1;
  vector<int> temp;
  while (i < j)
  {

    if ((vect[i] + vect[j]) > target)
    {
      j--;
    }
    else if ((vect[i] + vect[j]) < target)
    {
      i++;
    }
    else
    {
      temp.push_back(i);
      temp.push_back(j);
      return temp;
    }
  };
}

int main()
{
  vector<int> vect = {1, 2, 9, 8};

  for (int e = 0; e < vect.size(); e++) //        0 / 1 / 2
  {
    for (int ea = e; ea < vect.size(); ea++) //   0|0 / 0|1 / 0|2 /--
    //                                          1|1 / 1|2 /
    //                                          2|2
    {
      for (int sep = e; sep <= ea; sep++) //     0|0|0=3 / 0|1|0=3 / 0|1|1=7 / 0|2|0=3 / 0|2|1 = 7 / 0|2|2=9
      //                                        1|1|1=7 / 1|2|1=7 / 1|2|2=9
      //                                        2|2|2==9
      {
        cout << vect[sep];
      }
      cout << " ";
    }
    cout << endl;
  }
  cout << "---------------------------------" << endl;

  int target_sum = 11;
  int i_got, j_got;
  // know comming to the earlier question
  for (int i = 0; i < vect.size(); i++)
  {
    for (int j = i; j < vect.size(); j++)
    {
      int tem_Sum = 0;
      for (int k = i; k <= j; k++)
      {
        tem_Sum += vect[k];
      }
      cout << i << " | " << j << " | " << endl;
      cout << "temp_Sum: " << tem_Sum << endl;
      cout << "condition: " << (tem_Sum == target_sum) << endl;
      cout << endl;
      if (tem_Sum == target_sum)
      {
        cout << "I am in Talha" << endl;
        i_got = i;
        j_got = j;
      }
    }
  }
  cout << "Talha" << endl;
  for (int i = 0; i < vect.size(); i++)
  {
    for (int j = i; j < vect.size(); j++)
    {
      for (int k = i; k <= j; k++)
      {
        if (i_got == i && j_got == j && k == i)
        {
          cout << "[";
        }
        if (i_got == i && j_got == j)
        {
          cout << vect[k];
          cout << ",";
        }
      }
    }
  }
  cout << "]: is the sub array that gives the targetted sum" << endl;

  cout << "-----------------------------------------------------------------------------------------" << endl;
  // vector<int> vect = {1, 2, 9, 8};
  // Talha what Teacher is saying it is about the pair not the sub arrays so lets write another program for finding the pair
  vector<int> sum_pair_of_target = vect_target_Sum(vect, vect.size(), 9);
  cout << "[";
  for (int i : sum_pair_of_target)
    cout << vect[i] << " ";
  cout << "] are the pair that gives the target sum 9" << endl;
  cout << "__________below one is in obtimized way____________" << endl;

  sum_pair_of_target = obtimized_way_vts(vect, vect.size(), 9);
  cout << "[";
  for (int i : sum_pair_of_target)
    cout << vect[i] << " ";
  cout << "] are the pair that gives the target sum 9";
  return 0;
}