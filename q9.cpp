/*
a) Write a function int** AllocateMemory(int& rows, int& cols) that takes size of matrix (rows and columns) from user, allocates memory for the matrix and return its pointer.
b) Write a function void InputMatrix(int** matrix, const int rows, const int cols) which takes input the values in matrix from user (console).
c) Write a function void DisplayMatrix(int** matrix, const int& rows, const int& cols) that displays the matrix in proper format.
d) Write a function called maxCol that takes as parameters a pointer to a 2D array and its dimensions. It should return the largest element in each column of the array. Since there is more than one column in 2D array, you have to return a dynamic array that contains largest of each column.
e) Write a function void DeallocateMemory(int** matrix, const int& rows) that deallocates all the memory.
*/

#include<iostream>
using namespace std;

//function to allocate memory to matrix
int** AllocateMemory(int& rows, int& cols) {
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i] = new int[cols];
		}
	}
	return matrix;
}

//function to take input matrix
void InputMatrix(int** matrix, const int rows, const int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}

//function to display matrix
void DisplayMatrix(int** matrix, const int rows, const int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

//function to compute maximum values of each column
int* MaxCol(int** matrix, const int rows, const int cols) {
	int* maxArr = new int[cols];
	int maxVal;
	for (int j = 0; j < cols; j++) {
		maxVal = matrix[0][j];
		for (int i = 1; i < rows; i++) {
			if (maxVal < matrix[i][j]) {
				maxVal = matrix[i][j];
			}
		}
		maxArr[j] = maxVal;
	}
	return maxArr;
}

//function to deallocate memory
void DeallocateMemory(int** matrix, const int& rows) {
	for (int i = 0; i < rows; i++) {
		delete[]matrix[i];
	}
}

int main()
{
	int rows, cols;
	cout << "Enter Rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;

	int** matrix = AllocateMemory(rows, cols);

	cout << "Input Matrix:" << endl;
	InputMatrix(matrix, rows, cols);

	cout << "Display Matrix:" << endl;
	DisplayMatrix(matrix, rows, cols);

	cout << "\nMaximum Column Values: ";
	int* MaxColValue = MaxCol(matrix, rows, cols);
	for (int i = 0; i < cols; i++) {
		cout << *(MaxColValue + i) << ",";
	}
	cout << endl << endl;

	DeallocateMemory(matrix, rows);
	delete[]MaxColValue;

	system("pause");
	return 0;
}