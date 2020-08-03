# Array 
An array is collection of items stored at contiguous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

   ![enter image description here](https://media.geeksforgeeks.org/wp-content/uploads/array-2.png)

## **Types of indexing in array**

 - 0 (zero-based indexing): The first element of the array is indexed by subscript of 0
 - 1 (one-based indexing): The second element of the array is indexed by subscript of 1
 - n (n-based indexing): The base index of an array can be freely chosen. Usually programming languages allowing n-based indexing also allow negative index values and other scalar data types like enumerations, or characters may be used as an array index.
 
 ![enter image description here](https://www.geeksforgeeks.org/wp-content/uploads/Array-In-C.png)

### **Examples –**
    // A character array in C/C++/Java
	char arr1[] = {'g', 'e', 'e', 'k', 's'};

	// An Integer array in C/C++/Java
	int arr2[] = {10, 20, 30, 40, 50};

	// Item at i'th index in array is typically accessed
	// as "arr[i]".  For example arr1[0] gives us 'g'
	// and arr2[3] gives us 40.
