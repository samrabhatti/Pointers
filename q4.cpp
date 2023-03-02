/*
Write a function void incrementer(int *ptr, int size). It will receive an array and size of array
and print each element of array by incrementing 1 in each element.
*/

#include<iostream>
using namespace std;

void incrementer(int* ptr, int size)
{
	for (int i = 0; i < size; i++) {
		*(ptr + i) += 1;
		cout << *(ptr + i) << " " << endl;
	}
}

int main()
{
	int arr[5] = { 7,13,21,30,44 };
	int size = 5;
	incrementer(arr, 5);

	system("pause");
	return 0;
}