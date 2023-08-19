/*
You are required to develop a management system for a store. You are required to save only item IDs (int*) and item Prices(double*). User is asked to enter total number of items. The item ids and prices are two different 1-D dynamically allocated arrays.
Required Functions:
a) InputItemAndPrice take three parameters (item id array, price array, size). User enters the item id and price of each item in the function.
b) InsertOneItem takes three parameters (item id array, price array, size), takes input of one item from user and appends it at the end of already present item ids and item price arrays. No duplicate ids allowed. Decide the parameters type (pass by value or pass by reference).
c) DeleteOneItem takes three parameters (item id array, price array, size), takes input id of an item and delete its record from both arrays. Decide the parameters type (pass by value or pass by reference).
d) DisplayItems This function will display all items with prices. Call this function after every action e.g after insertOneItem call this function to see updated items in array.
*/

#include<iostream>
using namespace std;

void InputItemAndPrice(int*& idArray, double*& priceArray, int& size) {
	int id;
	double price;

	cout << "\nEnter size of Array: ";
	cin >> size;
	 
	//deallocate array created with dummy size
	delete[]idArray;
	delete[]priceArray;

	//allocare array with user entered size
	idArray = new int[size];
	priceArray = new double[size];

	cout << "Enter Item ID and Price: \n";
	for (int i = 0; i < size; i++) {
		cin >> id;
		cin >> price;
		idArray[i] = id;
		priceArray[i] = price;
	}
}

void InsertOneItem(int*& idArray, double*& priceArray, int& size) {
	int newId;
	double newPrice;

	cout << "Enter Item ID:";
	cin >> newId;
	cout << "Enter Item Price:";
	cin >> newPrice;

	//check if id already exists
	for (int i = 0; i < size; i++) {
		if (idArray[i] == newId) {
			cout << "SORRY!!! Item ID already exists";
			return;
		}
	}
	
	//initialize new Arrays
	int* newIdArray = new int[size + 1];
	double* newPriceArray = new double[size + 1];

	//copy old array contents into new array
	for (int i = 0; i < size; i++) {
		newIdArray[i] = idArray[i];
		newPriceArray[i] = priceArray[i];
	}

	//add new Id and Price to the array
	newIdArray[size] = newId;
	newPriceArray[size] = newPrice;

	size = size + 1;

	//deallocate memory
	delete[]idArray;
	delete[]priceArray;

	//assign new arrays
	idArray = newIdArray;
	priceArray = newPriceArray;

	cout << "\tItem Successfully Added\n";
}

void DeleteOneItem(int*& idArray, double*& priceArray, int& size) {
	int deleteId;
	cout << "Enter Item Id to delete: ";
	cin >> deleteId;

	int deleteIndex = -1;

	//check if particular item id exists
	for (int i = 0; i < size; i++) {
		if (idArray[i] == deleteId) {
			deleteIndex = i;
			break;
		}
	}

	if (deleteIndex == -1) {
		cout << "\t SORRY!!! No such Item exists\n";
		return;
	}
	else {
		//if particular item exists

		//create new arrays
		int* newIdArray = new int[size - 1];
		double* newPriceArray = new double[size - 1];

		//copy elements to arrays except the one which has to be removed
		int j = 0;
		for (int i = 0; i < size; i++) {
			if (i != deleteIndex) {
				newIdArray[j] = idArray[i];
				newPriceArray[j] = priceArray[i];
				j++;
			}
		}

		// deallocate memory
		delete[]idArray;
		delete[]priceArray;

		idArray = newIdArray;
		priceArray = newPriceArray;
		size = size - 1;

		cout << "\tItem Successfully Deleted\n";
	}
}

void DisplayAllItems(int* idArray, double* priceArray, int size)
{
	for (int i = 0; i < size; i++) {
		cout << "Item " << i + 1 << ":\tID: " << idArray[i] << "  Price: " << priceArray[i] << endl;
	}
}

int main()
{
	int choice;
	char a;

	int size = 5;
	int* id = new int[size];
	double* price = new double[size];
	
	cout << "\t\tWelcome to Store Management System using Pointers\n\n";

	while (true) {
		cout << "Operations You can Perform\n";
		cout << "\t Press 1 - Input Items and Price\n";
		cout << "\t Press 2 - Insert One Item\n";
		cout << "\t Press 3 - Delete One Item\n";
		cout << "\t Press 4 - Display All Items\n";
		cout << "\nWhich operation you want to Perform: ";
		cin >> choice;
		
		//perform operation
		switch (choice) {
		case 1:
			InputItemAndPrice(id, price, size);
			break;
		case 2:
			InsertOneItem(id, price, size);
			break;
		case 3:
			DeleteOneItem(id, price, size);
			break;
		case 4:
			DisplayAllItems(id, price, size);
			break;
		default:
			cout << "Invalid Operation Selected\n";
		}

		cout << "\n\nDo you want to continue? (y-n) : ";
		cin >> a;

		if (a == 'n') {
			break;
		}
		else if (a == 'y') {
			continue;
		}
		else {
			cout << "Invalid choice\n";
			break;
		}
	}

	system("pause");
	return 0;
}