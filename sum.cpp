/*
Write a function void sum(int *ptr1, int *ptr2). It will receives the two pointer integer variables and 
print the sum of these variables on screen.
*/

#include<iostream>
using namespace std;

int Sum(int* ptr1, int* ptr2)
{
	int sum = *ptr1 + *ptr2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum;

	int* ptr1 = &a;
	int* ptr2 = &b;
	sum=Sum(ptr1, ptr2);

	cout << "a:" << a << "\tb:" << b << endl;
	cout << "sum: " << sum << endl << endl;

	system("pause");
	return 0;
}