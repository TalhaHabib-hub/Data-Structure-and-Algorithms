/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
/* Talha return pair in sorted array with target sum.*/
// Talha what teacher is saying that you have to find the sum of a sub array that is equal to the targeted value and you have to return that array or the index for those element which are giving you that sum , and Teacher  also mentioned that those array actuall one will be in ascending or descending array you have to solve that before the lecture even starts.
// Talha minimize to understand the below given comments

#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<int> vect = {1, 2, 9, 8};

 for (int e = 0; e < vect.size();e++)//        0 / 1 / 2
 { 
   for (int ea = e; ea < vect.size();ea++)//   0|0 / 0|1 / 0|2 /--
   //                                          1|1 / 1|2 / 
   //                                          2|2
   { 
     for (int sep = e; sep <= ea; sep++)//     0|0|0=3 / 0|1|0=3 / 0|1|1=7 / 0|2|0=3 / 0|2|1 = 7 / 0|2|2=9 
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
 //know comming to the earlier question
 for (int i = 0; i < vect.size();i++){
   for (int j = i; j < vect.size();j++){
     int tem_Sum = 0;
     for (int k = i; k <= j;k++){
       tem_Sum += vect[k];
     }
     cout << i << " | " << j << " | " <<endl;
     cout <<"temp_Sum: "<< tem_Sum << endl;
     cout <<"condition: "<< (tem_Sum == target_sum )<< endl;
     cout << endl;
     if(tem_Sum == target_sum){
       cout << "I am in Talha" << endl;
       i_got = i;
       j_got = j;
     }
   }
 }
 cout << "Talha" << endl;
 for (int i = 0; i < vect.size(); i++)
 {
   for (int j = i; j < vect.size();j++){
     for (int k = i; k <= j;k++){
      if(i_got == i && j_got==j && k==i){
        cout << "[";
      }
       if(i_got == i && j_got==j){
         cout << vect[k];
         cout << ",";
       }
      }
    }
  }
  cout << "]: is the sub array that gives the targetted sum" << endl;
   return 0;
}