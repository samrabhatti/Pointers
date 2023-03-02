/*
Create two arrays dynamically and store their sum in a third array and deallocate memory of first two arrays.
*/

#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	int* arr1 = new int[size];    //create dynamic array1
	int* arr2 = new int[size];    //create dynamic array2
	int* sum = new int[size];     //create dynamic sum=array1+array2

	//initialize array1
	cout<<"Enter Array 1:\n";
	for(int i=0; i<size; i++) {
		cin>>arr1[i];
	}
	cout<<endl;

	//initialize array2
	cout<<"Enter Array 2:\n";
	for(int i=0; i<size; i++) {
		cin>>arr2[i];
	}
	cout<<endl;

	//Compute sum of arr1 and arr2
	for(int i=0; i<size;i++) {
		sum[i]=arr1[i]+arr2[i];
	}

	//Display sum of arr1 and arr2
	cout << "Sum of both Arrays is:";
	for(int i=0; i<size; i++) {
		cout<<sum[i]<<", ";
	}
	cout << endl;

	//deallocate memory of arr1 and arr2
	delete[]arr1;
	delete[]arr2;

	system("pause");
	return 0;
}