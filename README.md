# Pointers
Pointers are variables that hold the memory addresses of other variables. They allow programs to pass variables by reference, enabling them to modify the original data. Additionally, pointers facilitate the creation and manipulation of dynamic data structures, which can change in size during program execution. One common application of pointers is to iterate over elements in arrays or other data structures, allowing programs to access and manipulate each element individually.

This repository contains some solved exercises using Pointers and Pointer Array.

### Q1.cpp
Define a variable 'var' and pointer 'ptr', both must have the same data type. Assign a value to variable 'var'. Assign the address of a variable to a pointer using operator (&). Print the memory address of 'var' with the pointer. Print the value of 'var' using pointer.

### Q2.cpp
Declare an array of elements 'arr[5]'. Declare a pointer variable 'ptr'. Display the address of each element using array. Display the address of each element using pointer.

### Q3.cpp
Write a C++ program to find out sum of array elements using pointer.

### Q4.cpp
Write a function void incrementer(int *ptr, int size). It will receive an array and size of array and print each element of array by incrementing 1 in each element.

### Q5.cpp
Create a dynamic variable, initialize it, prints its value on screen and them free its memory using delete operator.

### Q6.cpp
Create two arrays dynamically and store their sum in a third array and deallocate memory of first two arrays.

### Q7.cpp
Write a program of Harmonic mean = n / ((1/x 1 ) + (1/x 2 ) + (1/x 3 ) + . . . + (1/x n )) using dynamic aray and deallocate the memory.

### Q8.cpp
a) Write a function int* allocateMemory(int& size) that takes size of matrix (rows and columns) from user, allocates memory for the array and return its pointer.

b) Write a function void InitializeArray(int* array, const int& size) that initializes the array elements by taking input from user.

c) Write a function int* search(int* array, const int& size) that takes input value for search value from user and return its pointer.

d) Write a function void deallocateMemory(int* array, const int& size) that deallocates all the memory.

### sum.cpp
Write a function void sum(int *ptr1, int *ptr2). It will receives the two pointer integer variables and print the sum of these variables on screen.

### swap.cpp
Given two integers x and y, write a function to swap their values using pointers.

### Store_Management_System.cpp
You are required to develop a management system for a store. You are required to save only item IDs (int*) and item Prices(double*). User is asked to enter total number of items. The item ids and prices are two different 1-D dynamically allocated arrays.

Required Functions:

A) **InputItemAndPrice** take three parameters (item id array, price array, size). User enters the item id and price of each item in the function.

B) **InsertOneItem** takes three parameters (item id array, price array, size), takes input of one item from user and appends it at the end of already present item ids and item price arrays. No duplicate ids allowed. Decide the parameters type (pass by value or pass by reference).

C) **DeleteOneItem** takes three parameters (item id array, price array, size), takes input id of an item and delete its record from both arrays. Decide the parameters type (pass by value or pass by reference).

D) **DisplayItems** This function will display all items with prices. Call this function after every action e.g after insertOneItem call this function to see updated items in array.
