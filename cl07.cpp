//clo7

#include <iostream>
using namespace std;
int main()
{
  int beta[7] = {0, 1};
  for (int i = 2; i < 7; i++)
  {
    //compute the sum of the previous two entries of beta and put the rest
    //into the ith element of beta
  beta[i] = beta[i -1] + beta[i - 2];
  
  }

  //this for loop will dplay ever element of beta each followed by a space.
  for (int i = 0; i < 7; i++)
  
  //  cout << "beta[" << i << "]" << beta[i] << " ";
    cout << beta[i] << " ";
 //   cout << endl;
  

  return 0;
}
