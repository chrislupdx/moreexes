/*
*   Intro to Pointers
*
*   This C++ program demonstrates use of pointers
*
* Notes:
*   See D.S.Malik chapter 12
*
*   2019-05-19 Jesse Black  Original
*/

#include <iostream>         // cout and cin and endl

using namespace std;        // so we don't need std:: in front of everything

        // declare an array and initialize it.
const int ARRAYSIZE = 10;
int myArray[ARRAYSIZE] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };

int main()
{

    int myVal = 1122334455;		// define an integer variable
    int *myIntPtr;		// define a pointer to an integer

            // explain what the program does.
    cout << "This program demonstrates use of pointers and arrays." << endl;

            // display initial values.
    cout << "The value of my variable is " << myVal << endl;
    cout << "The address of my variable is " << &myVal << endl;

    myIntPtr = &myVal;	// get the address of the variable and put it into the pointer

    cout << "The contents of my pointer is " << myIntPtr << endl;
    cout << "My pointer points to the value " << *myIntPtr << endl;  // prints the contents of myVal.

    cout << "I'm going to poke a new value into address " << myIntPtr << endl;
    *myIntPtr = 789;    // pokes a new value into myVal.
    cout << "The contents of my variable is now " << myVal << endl;

    cout << endl << "Now working with the array ..." << endl;

            // print out the values in the array
    cout << "Address \t Array Value" << endl;
    for ( int i=0; i<ARRAYSIZE; ++i )
    {
        cout << &myArray+i << " \t " << myArray[i] << endl;
    }

            // poke a new value into the array
    cout << "Using pointers, " << endl;
    cout << "I'm going to poke new values into element 1 and element " << ARRAYSIZE-1 << " of the array." << endl;
    *(myArray+1) = 11111;                             // put a value into element #1 of the array
    *(myArray+ARRAYSIZE-1) = ARRAYSIZE*1000+ARRAYSIZE; // put a value into the last element of the array

            // print out the values at specific locations in memory ...
            // ... and also each element of the array.
    cout << "Address \t Memory \t Array Value" << endl;
    for ( int i=0; i<ARRAYSIZE; ++i )
    {
        cout << &myArray+i << " \t " << *(myArray+i) << " \t " << myArray[i] << endl;
    }

    cout << "This shows that array indexing and pointer math are pretty much the same thing." << endl;

    return 0;       // pretend all is well.
}

