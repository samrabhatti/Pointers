/*
Write a program of Harmonic mean using dynamic array and deallocate the memory.
*/

#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of Array: ";
	cin >> size;

	double* arr = new double[size];

	//initialize array
	cout << "Enter array elements 1 by 1:\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	//compute harmonic mean
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + (1 / arr[i]);
	}

	double harmonic_mean = size / sum;
	cout << "Harmonic Mean:" << harmonic_mean << endl << endl;

	//deallocate memory
	delete[]arr;

	system("pause");
	return 0;
}