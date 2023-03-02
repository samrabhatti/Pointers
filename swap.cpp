/*
Given two integers x and y, write a function to swap their values using pointers.
*/

#include<iostream>
using namespace std;

void swap(int*& ptr1, int*& ptr2) {
	int swap;
	swap = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = swap;
}

int main()
{
	int x = 10;
	int y = 20;

	cout << "Before Swap" << endl;
	cout << "x:" << x << "\ty:" << y << endl;

	int* ptr1 = &x;
	int* ptr2 = &y;
	swap(ptr1, ptr2);

	cout << "\nAfter Swap" << endl;
	cout << "x:" << *ptr1 << "\ty:" << *ptr2 << endl << endl;

	system("pause");
	return 0;
}