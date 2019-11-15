//DrawX take 3

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char='X');
void intro(int&, char&);
int requestNum(int& number);
char requestChar(char& shape);

int main()
{
  int number;
  char shape;

cout << "intro" << endl;


while (number != 0)
{
  //request an number
  requestNum(number);

  //request a char
  requestChar(shape);
}


  return 0;
}


int oneRow( string &s, int indent, char c)
{
  return 0;
}

char requestChar(char& shape)
{
  cout << "gimme a char" << endl;

  cin >> shape;
  cout << endl;
  if (shape == 0)
  {
  shape = '&';
  }
}

int requestNum(int& number)
{
  do
  {
  cout << "gimme a number" << endl;
  cin >> number;
  }
  while (number < 0);
}
