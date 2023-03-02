/*
Write a C++ program to find out sum of array elements using pointer.
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 5,10,15,20,25 };
	int* ptr = arr;
	int sum = 0;

	cout << "Array: ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ", ";
	}

	cout << "\nSum of Array Elements using Pointer: "; 
	for (int i = 0; i < 5; i++)	{
		sum = sum + *(ptr + i);
	}

	cout << sum << endl << endl;
	system("pause");
	return 0;
}