/*
a) Declare a string “- This is, my Object Oriented Programming Lab.”
b) Tokenize the above string using strtok function and store it in a dynamic char array.
c) Print dynamic char array on screen.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[] = "- This is, my Object Oriented Programming Lab.";
    char* token = strtok(str, "-,. ");
    while (token != NULL) {
        cout << token << endl;
        token = strtok(NULL, "-,. ");
    }
    system("pause");
    return 0;
}