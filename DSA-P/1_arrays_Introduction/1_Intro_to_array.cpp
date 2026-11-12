#include<iostream>
#include<climits>
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
int max_min[] = {7, 9, 3, -33, 5, 4, 12 ,332};
int largest = INT_MIN; 

int smallest = INT_MAX; // plus infinity in C++
// mentionig the iteration may for only for the first time
// for (int i=0; i < sizeof(max_min) / 4;i++){//i=0
//   for (int j = 0; j < sizeof(max_min) / 4;j++){//j=0|1|2
//     if(largest != max_min[j]){//false|true|true
//       if(largest < max_min[j]){//false|true
//         largest = max_min[j];//largest = 9|
//       }
//       if(smallest > max_min[j]){//false|true
//         smallest = max_min[j];//smallest=3
//       }

//     }
//   }
// }

// after doing the above code i realized that we can do it in a single loop so i did it, for the above one I will say it is first try and it is working but not optimized so i did it in a single loop
// for (int i=0; i < sizeof(max_min) / 4;i++){
//   if(largest<max_min[i]){
//     largest = max_min[i];
//   }
//   if(smallest>max_min[i]){
//     smallest = max_min[i];
//   }
// }
// Talha there is even simpler method which i learned just now from my teach
for (int i=0; i < sizeof(max_min) / 4;i++){
  largest = max(largest, max_min[i]);
  smallest = min(smallest, max_min[i]);
}

cout << "largest-> " <<largest<<endl;
cout << "smallest-> " << smallest << endl;


// Talha mam has given the task to find the index of the largest and smallest element in the array so i will do it now
int index_of_largest = 0;
int index_of_smallest = 0;
for (int i=0; i < sizeof(max_min) / 4;i++){
  if(max_min[i] == largest){
    index_of_largest = i;
  }
  if(max_min[i] == smallest){
    index_of_smallest = i;
  }
}
cout << "index of largest-> " <<index_of_largest<<endl;
cout << "index of smallest-> " << index_of_smallest << endl;


//also Talha we did because we had the largest and smallest element in the array so we can find the index of them but if we don't have the largest and smallest element then we can find the index of them in a single loop as well so i will do it now
int index_of_largest_2 = 0;
for(int i=0; i<sizeof(max_min)/4; i++){
  if(max_min[i] > max_min[index_of_largest_2]){
    index_of_largest_2 = i;
  }
}
cout << "index of largest (method 2)-> " <<index_of_largest_2<<endl;
//for minimum index we can do the same thing as we did for maximum index
int index_of_smallest_2 = 0;
for(int i=0; i<sizeof(max_min)/4; i++){
  if(max_min[i] < max_min[index_of_smallest_2]){
    index_of_smallest_2 = i;
  }
}
cout << "index of smallest (method 2)-> " <<index_of_smallest_2<<endl;
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