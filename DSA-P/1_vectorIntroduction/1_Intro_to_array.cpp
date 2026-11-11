#include<iostream>
using namespace std;
int main(){
  cout << "Array is DS"<<endl;
   //first way to create
  int marks[5];

   //second way to create
  int people_count[5]={23,232,32,21,43};

   //third way to create
  int books_count[] = {32, 323, 23};
//--------------------------------------------------
  cout << "books_count element at 0 :"<<books_count[0] << endl;
  cout << "books_count element at 1 :"<<books_count[1] << endl;
  cout << "books_count element at 2 :"<<books_count[2] << endl;
  // cout << books_count[-1] << endl;// not working
  cout << "people_count element at -1:"<<people_count[-1] << endl;//  working but not accurate
//--------------------------------------------------
  cout << endl;

  cout <<"sizeof --> books_count array : "<< sizeof(books_count)<<" -> actually telling how memory bit the DS is taking "<<endl;
  cout <<"sizeof --> people_count array : "<< sizeof(people_count)/4<<" -> I know that int takes 4 bit so sizeof(...)/4"<<endl;
//--------------------------------------------------
//  people_count[5]={23,232,32,21,43};
cout << endl;
// running loop over array
for (int i=0; i < sizeof(people_count) / 4;i++){
  cout << "element #" << i << " is->" << people_count[i] << endl;
}
cout << endl;
//-------------------------------------------------
// taking input of arrys element;
/*
int number[4];
for (int i=0; i < sizeof(number) / 4;i++){
  cout << "give element #" << i << " of number_array ->";
  cin>>number[i];
}
cout << endl;
*/
//-------------------------------------------------
//finding the smallest and largest in an array (my try and i did it)
int max_min[] = {7, 9, 3, 33, 5, 4, 12};
int max = 0; // max=33
int min = max_min[0]; // min=33
// mentionig the iteration may for only for the first time
for (int i=0; i < sizeof(max_min) / 4;i++){//i=0
  for (int j = 0; j < sizeof(max_min) / 4;j++){//j=0|1|2
    if(max != max_min[j]){//false|true|true
      if(max < max_min[j]){//false|true
        max = max_min[j];//max = 9|
      }
      if(min > max_min[j]){//false|true
        min = max_min[j];//min=3
      }

    }
  }
}
cout << "max-> " <<max<<endl;
cout << "min-> " << min << endl;
}
/*

data structures are use to store data
data can be linear-- like a single line
data can be hierarchial-- like branching
different data are store in different structure.

Algorithm:-
different operations performed on the data structure

arrays store data of same type
arrays are linear
arrays are contiguous in memory

syntax:
type_of_array identifier[size];
*/