//DrawX take 3

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char = 'X');
void intro(int&, char&);
int requestNum(int& indent);
char requestShape(string& shape);

int main()
{
  int i, indent,left, right;
  string c, s, oneRowString;
  char charC;
    
cout << "intro" << endl;


while (indent != 0)
{
  //request an number
  requestNum(indent);
  //request a char
  requestShape(c);

  //cast c as a char to pass into oneRow
  charC = c[0];
    
  //blanks the string right before execution of each loop
  s = "";

  //for initialize a string the length of indent
  for (i = 0; i < indent; i++)
    {
   s.insert(0, "."); 
    }

   oneRow(s, indent, charC);
}
  return 0;
}

//does oneRow does the string modification (what if this int is not indent?)
int oneRow( string& s, int indent, char c)
{
  int left = 0;
  int right = indent - 1;
  
  string stringC;
  stringC.insert(0, 1, c);
//really tempted to throw in a 4loop here to increment+decrement and print for ln of indent
 //replaces char on left/right
  s.replace(left, 1, stringC);
  s.replace(right, 1, stringC);
  cout << s << endl;

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
