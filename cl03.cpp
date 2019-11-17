//cl03

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int x = 0;
  int i, j;
  int const number = 20;
  double beta[number] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  //check
  for (i = 0; i < number; i ++)
  beta[i] = 0;

for (int j = 0; j <= number; j++)  
{ 
 int counter;
   cout << j << " ";
 
//  if (j == 3 | j == 7 | j == 11 | j == 15 | j == 19)  
 if ((j + 1) % 4 == 0)
 {
  cout << endl; 
 }


} 
x = 0;
  
  return 0;
}
