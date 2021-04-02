/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Function that tranforms a string into a char array and with a loop structure determines its lenght
int CountString(string s)
{
    //Inicitiating lenght counter
    int size = 0;
    
    //Creating const char array    
    const char* s_char = s.c_str();
    
    //Counting array chars until it gets a null value
    do
    {
        size++;
    }
    while (s_char[size] != NULL); 
 
    //returning the result
    return size;
}

//Main class request a string and return the result of CountString function to the user
int main()
{
    string s;
    
    cout << "Enter a string: ";
    
    //Getting the entire line (with spaces)
    getline(cin,s);
    
    cout << "Length of the string is: " << CountString(s) << endl;

    return 0;
}
