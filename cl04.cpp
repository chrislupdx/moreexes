//cl04
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
double myList[5] = { 1.0, 2.0};
for (int i = 2; i < 5; i++)
  {
  myList[i] = myList[i- 1] + myList[i - 2]; 
  }
//can we print each value exactly once with one loop?

for ( int x =0; x < 6; x++)
{
  cout << "x is" << x << endl;
  cout << "mylist is" << myList[x] << endl;
}




return 0;
}
