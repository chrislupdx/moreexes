//cl05
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//sets the value of each element of myList to the index of the element


  int myList[10];
  for (int i = 0; i < 10; i++)
  {

  //  cout << i << endl;
      myList[i] = i;
  }

  for (int x = 0; x < 10; x++)
  {
  cout << "myList is" << myList[x] << endl;
  }

 return 0; 
}
