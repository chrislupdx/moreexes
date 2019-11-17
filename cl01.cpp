//array range stuff
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  int numb = 5;
  double passwords[numb];

  for(int i = 0; i < numb; i++)
  {
    passwords[i] = 2;
    cout << passwords[i] << endl;
  }

  cout << "p[6]" << passwords[6] << endl;  
  //array range never exceeds passwords[int] val

  //writing over p[0] should be considered not okay
  passwords[0] = 3;


  return 0;
}
