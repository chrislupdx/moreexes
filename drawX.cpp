//DrawX take 3

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char='X');
void intro(int&, char&);
int requestNum(int& indent);
char requestShape(string& shape);

int main()
{
  int i, indent;
  string c, s, oneRowString;
  char charC;

cout << "intro" << endl;


while (indent != 0)
{
  //request an number
  requestNum(indent);

  //request a char
  requestShape(c);
  //blanks the string right before execution of each loop
  oneRowString = "";

  //for initialize a string the length of indent
  for (i = 0; i < indent; i++)
    {
   oneRowString.insert(0, "."); 
    }  

 //insert mark character in left and right place
  for (i = 0; i < indent; i++)
  {
    int left = 0;
    int right = indent - 1;
  oneRowString.replace(left, 1, c);
  oneRowString.replace(right, 1, c); 
//  ++left;
//  --right;
  

   cout << oneRowString << endl;
   }
  }

  return 0;
}

int oneRow( string& s, int indent, char c)
{
  int i;
 cout << "ping" << endl; 
//produce a str that is indent spaces long.
//for (i = 0; i < indent; i++)

  return 0;
}

char requestShape(string& c)
{
  cout << "gimme a char" << endl;

  cin >> c;
  cout << endl;
  if (c == "0")
  {
  c = '&';
  }
}

int requestNum(int& indent)
{
  do
  {
  cout << "gimme a number" << endl;
  cin >> indent;
  }
  while (indent < 0);
}
