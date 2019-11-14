//DrawX take 3

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char='X');
void intro(int&, char&);
int main()
{
  int number;
  char shape;

  intro(number, shape);

  cout << shape << number << endl;

  return 0;
}


int oneRow( string &s, int indent, char c)
{

  return 0;
}

void intro(int& number, char& shape)
{

  cout << "this is what it will do " << endl;
  cout << "gimme a integer" << endl;
  cin >> number;
  cout << "gimme a char" << endl;
  cin >> shape;

}
