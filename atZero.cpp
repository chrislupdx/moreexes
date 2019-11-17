//tries to perform a graceful exit at input of zero


#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
//runs a while loop: internals = requests an int input on a looop
//when we hit a zero, it does a graceful exit
int i, sum;

  do
  {
    cout << "gimme number" << endl;
    cin >> i;
    cout << "number is" << i << endl;
  }
  while (i != 0);

return 0; 
}
