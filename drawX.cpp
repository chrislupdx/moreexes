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

  oneRowString = "";
  //do we do a draw X function or just a dowhile
  for (i = 0; i < indent; i++)
  {
  //  cout << indent << endl;
   oneRowString.insert(0, "."); 
  }
  
  cout << oneRowString << endl;
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
