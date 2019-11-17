//cl08
#include <iostream>
#include <iomanip>

using namespace std;

void sum(int x, int y, int& z);

int main()
{  
//  int list1[10], list2[10], list3[10];
 int list1[5] = { 1, 2, 3, 4, 5};
 int list2[5] = { 1, 2, 3, 4, 5};
 int list3[5] = { 1, 2, 3, 4, 5};
 
  int a, b, c;

//  sum( a, b, c);
 // sum(list1[0], list2[0], a );
 //   sum(list1, list2, c);
 
  for (int i = 1; i <= 5; i++)
    sum (list1[i], list2[i], list3[i] );


  return 0;
}

void sum(int x, int y, int& z)
{
  z = x + y;
}
