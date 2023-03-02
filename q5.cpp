/*
Create a dynamic variable, initialize it, prints its value on screen and then free its memory using delete operator.
*/

#include<iostream>
using namespace std;
int main()
{
	int* a=new int;
	*a=10;

	cout<<"a:"<<*a<<endl;
	delete a;

	system("pause");
	return 0;
}