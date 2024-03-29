# Pointers
Pointers are variables that hold the memory addresses of other variables. They allow programs to pass variables by reference, enabling them to modify the original data. Additionally, pointers facilitate the creation and manipulation of dynamic data structures, which can change in size during program execution. One common application of pointers is to iterate over elements in arrays or other data structures, allowing programs to access and manipulate each element individually.

This repository contains some solved exercises using Pointers and Pointer Arrays.

## Q1.cpp
Define a variable 'var' and pointer 'ptr', both must have the same data type. Assign a value to variable 'var'. Assign the address of a variable to a pointer using operator (&). Print the memory address of 'var' with the pointer. Print the value of 'var' using pointer.

## Q2.cpp
Declare an array of elements 'arr[5]'. Declare a pointer variable 'ptr'. Display the address of each element using array. Display the address of each element using pointer.

## Q3.cpp
Write a C++ program to find out sum of array elements using pointer.

## Q4.cpp
Write a function void incrementer(int *ptr, int size). It will receive an array and size of array and print each element of array by incrementing 1 in each element.

## Q5.cpp
Create a dynamic variable, initialize it, prints its value on screen and them free its memory using delete operator.

## Q6.cpp
Create two arrays dynamically and store their sum in a third array and deallocate memory of first two arrays.

## Q7.cpp
Write a program of Harmonic mean = n / ((1/x 1 ) + (1/x 2 ) + (1/x 3 ) + . . . + (1/x n )) using dynamic aray and deallocate the memory.

## Q8.cpp
a) Write a function int* allocateMemory(int& size) that takes size of matrix (rows and columns) from user, allocates memory for the array and return its pointer.

b) Write a function void InitializeArray(int* array, const int& size) that initializes the array elements by taking input from user.

c) Write a function int* search(int* array, const int& size) that takes input value for search value from user and return its pointer.

d) Write a function void deallocateMemory(int* array, const int& size) that deallocates all the memory.

## Q9.cpp
a) Write a function int** AllocateMemory(int& rows, int& cols) that takes size of matrix (rows and columns) from user, allocates memory for the matrix and return its pointer.

b) Write a function void InputMatrix(int** matrix, const int rows, const int cols) which takes input the values in matrix from user (console).

c) Write a function void DisplayMatrix(int** matrix, const int& rows, const int& cols) that displays the matrix in proper format.

d) Write a function called maxCol that takes as parameters a pointer to a 2D array and its dimensions. It should return the largest element in each column of the array. Since there is more than one column in 2D array, you have to return a dynamic array that contains largest of each column.

e) Write a function void DeallocateMemory(int** matrix, const int& rows) that deallocates all the memory.

## Q10.cpp
a) Declare a string “- This is, my Object Oriented Programming Lab.”

b) Tokenize the above string using strtok function and store it in a dynamic char array.

c) Print dynamic char array on screen.

## sum.cpp
Write a function void sum(int *ptr1, int *ptr2). It will receives the two pointer integer variables and print the sum of these variables on screen.

## swap.cpp
Given two integers x and y, write a function to swap their values using pointers.
