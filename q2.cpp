/*
Declare an array of elements “arr[5]”. Declare a pointer variable “ptr”. 
Display the address of each element using array. Display the address of each element using pointer.
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 5,10,15,20,25 };
	int* ptr;

	cout << "Address of elements using array\n" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Address of Element " << i << " using array:" << &arr[i] << endl;
	}

	cout << "\nAddress of elements using pointers\n" << endl;
	for (int i = 0; i < 5; i++) {
		ptr = &arr[i];
		cout << "For Element " << i << " Address is:" << ptr << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}