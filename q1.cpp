/*
Define a variable 'var' and pointer 'ptr', both must have the same data type. Assign a value to variable 'var'.
Assign the address of a variable to a pointer using operator (&). Print the memory address of 'var' with the pointer.
Print the value of 'var' using pointer.
*/

#include<iostream>
using namespace std;
int main()
{
	int var;
	int* ptr;
	var = 25;
	ptr = &var;
	cout << "Value of 'var' using ptr:   " << *ptr << endl;
	cout << "Address of 'var' using ptr: " << ptr << endl << endl;
	system("pause");
	return 0;
}