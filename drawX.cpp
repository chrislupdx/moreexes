//DrawX 
//11/15/19 Chris Lu
//This drawX program takes a user-given integer and character (as string) and 
//returns a X the size of the integer printed with the designated character
//sources: none

#include <iomanip>
#include <iostream>

using namespace std;

int oneRow(string&, int, char = 'X');
void intro(int&, char&);
void requestNum(int& indent);
void requestShape(string& shape);

int main()
{
  int i, indent,left, right;
  string c, s, oneRowString;
  char charC;
    
  cout << "Takes an integer and character (as string) and " 
  <<  "prints an x the size of the integer with the character" << endl;

while (indent != 0)
  {
  //request an number
  requestNum(indent);
  //request a char
 if (indent == 0)
 {
   cout << "exiting" << endl;
 }
 else 
 {
  requestShape(c);
 }
   //cast c as a char to pass into oneRow
  charC = c[0];   
  //blanks the string right before execution of each loop
  s = "";
  
  //for initialize a string the length of indent
  for (i = 0; i < indent; i++)
     {
   s.insert(0, "."); 
     }
  if(indent == 0)
    {
    cout << "num = 0, exiting!" << endl;
    }
  else
    {
   oneRow(s, indent, charC);
    }
  }

return 0;
}

//initialize the one row string, call display the modified string for each row of the X
int oneRow( string& s, int indent, char c)
{
  int left = 0;
  int right = indent - 1;
  string stringC, newString;
  newString = s;
 
  //strinC = string version of char c
  stringC.insert(0, 1, c);
  //insert marker character on the left and right position
  newString.replace(left, 1, stringC);
  newString.replace(right, 1, stringC);

  for (int i = 0; i < indent; i++)
  {
  //using replace to stick the markers in the the right place 
   newString.replace(left, 1, stringC);
   newString.replace(right, 1, stringC);
   cout << newString << endl;
   //incrementing/decrementing so they can get printed into the right position next
   ++left;
   --right; 
  //reset newstring 
  newString = s;
  }
  return 0;
}

//takes a string input, if specified 0, will return a default Char
void requestShape(string& c)
{
  cout << "gimme a char" << endl;
  cin >> c;
  cout << endl;
  if (c == "0")
  {
  c = '&';
  }
}

//Only takes positive values, zero is an exit condition
void requestNum(int& indent)
{ 
  do
  {
  cout << "gimme a number" << endl;
  cin >> indent;
  } 
  while (indent < 0 );
}
