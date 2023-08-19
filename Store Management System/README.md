# Store_Management_System.cpp
You are required to develop a management system for a store. You are required to save only item IDs (int*) and item Prices(double*). User is asked to enter total number of items. The item ids and prices are two different 1-D dynamically allocated arrays.

## Required Functions:

### A) Input Item And Price

It take three parameters (item id array, price array, size). User enters the item id and price of each item in the function.

### B) Insert One Item

It takes three parameters (item id array, price array, size), takes input of one item from user and appends it at the end of already present item ids and item price arrays. No duplicate ids allowed. Decide the parameters type (pass by value or pass by reference).

### C) Delete One Item

It takes three parameters (item id array, price array, size), takes input id of an item and delete its record from both arrays. Decide the parameters type (pass by value or pass by reference).

### D) Display Items

This function will display all items with prices. Call this function after every action e.g after insertOneItem call this function to see updated items in array.
