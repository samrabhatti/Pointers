/*
a) Write a function int* allocateMemory(int& size) that takes size of matrix (rows and columns) from user, allocates memory for the array and return its pointer.
b) Write a function void InitializeArray(int* array, const int& size) that initializes the array elements by taking input from user.
c) Write a function int* search(int* array, const int& size) that takes input value for search value from user and return its pointer.
d) Write a function void deallocateMemory(int* array, const int& size) that deallocates all the memory.
*/

#include<iostream>
using namespace std;

//Function to Allocate Memory
int* allocateMemory(int& size) {
	int* array = new int[size];
	return array;
}

//Function to Initialize Array
void initializeArray(int* array, const int& size) {
	cout << "Enter Array Elements:\n";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

//Function to Search value
bool search(int* array, const int& size) {
	int search;
	cout << "Enter Search Value: ";
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == array[i])
			return true;
	}
	return false;
}

//Function to Deallocate Memory
void deallocateMemory(int* array) {
	delete[]array;
}

int main()
{
	int size;
	cout << "Enter size: ";
	cin >> size;

	int* array = new int[size];
	allocateMemory(size);
	initializeArray(array, size);

	if (search(array, size) == true)
		cout << "Found\n\n";
	else
		cout << "Not Found\n\n";

	deallocateMemory(array);

	system("pause");
	return 0;
}