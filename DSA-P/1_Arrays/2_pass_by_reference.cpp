/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

int function(int arr[],int size)
{

  for (int i = 0; i < size; i++)
  {
    arr[i] = arr[i] * 2;
  }
}
int main()
{
  int arr_size = 3;
  int array[arr_size] = {3, 2, 1};
  for (int i = 0; i < sizeof(array) / 4; i++)
  {
    cout << " " << array[i] << "  ";
  }
 cout<<endl;

  function(array,arr_size);

  for (int i = 0; i < sizeof(array) / 4; i++)
  {
    cout << " " << array[i] << "  ";
  }
  // so Talha it shows that arrays when pass to the function it is always pass by reference
  // Talha in memory arrays name is explicitly a pointer so it mean talha the array here was storing the addresse of the starting array element so when you get the first element of the array you can then definitly and accurately tell the address of the upcoming array elements address( thus we traverse a whole array)

  // Talha what actually happens is that when you sended the array to the function the function receives the address of the first element of that array so the changes are happening in the same array

  return 0;
}

// In C++ a reference is an alternative name for an object or function,and its address is the address of the object or function it refers to. for sake of understanding we are calling it address here.

// array is a non-primitive type
// Talha remember this that array will always be a passed by reference always by default