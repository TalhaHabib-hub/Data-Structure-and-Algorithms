/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> numbers = {4, 2, 6, 9};
  cout << "array.size() --> ";
  cout << numbers.size() << endl;
  cout << endl;
  cout << "array --> ";
  for (int i : numbers)
  {
    cout << i << " ";
  }
  cout << endl;
  cout << endl;
  numbers.push_back(5);
  cout << "after the array.pushback(num) --> ";
  for (int i : numbers)
  {
    cout << i << " ";
  }
  cout << endl;
  cout << endl;

  numbers.pop_back();
  cout << "after the array.popback(num) --> ";
  for (int i : numbers)
  {
    cout << i << " ";
  }
  cout << endl;
  cout << endl;
  cout << "array.front() --> ";
  cout << numbers.front() << endl;
  cout << endl;
  cout << "array.back() --> ";
  cout << numbers.back() << endl;
  cout << endl;
  cout << "array.at(position) --> ";
  cout << numbers.at(3);
  return 0;
}