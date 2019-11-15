//DrawX take 3

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char='X');
void intro(int&, char&);
int requestNum(int& number);
char requestShape(string& shape);

int main()
{
  int number;
  string shape;

cout << "intro" << endl;


while (number != 0)
{
  //request an number
  requestNum(number);

  //request a char
  requestShape(shape);

  //do we do a draw X function or just a dowhile
}


  return 0;
}


int oneRow( string& s, int indent, char c)
{
  int i;
 
//produce a str that is indent spaces long.
//for (i = 0; i < indent; i++)

  return 0;
}

char requestShape(string& shape)
{
  cout << "gimme a char" << endl;

  cin >> shape;
  cout << endl;
  if (shape == "0")
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
