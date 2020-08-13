/* 
	write a program to implement the binary search algorithm
	N = 10 [15 24 65 67 98 101 120 156 200 212 ]
	Search element 65
	Find mid = (start + end)/2;
	Comparison-1  
	start = 0
	end = 9
	mid = 4
	arr[mid] = 98
	98 &gt; 65 end = mid - 1 (go to previous)
	
	Comparison-2
	start = 0
	end = 3
	mid = 1
	arr[1] = 24
	24 &lt; 65 start = mid + 1 (go to next)
	
	Comparison-3
	start = 2
	end = 3
	mid = 2
	arr[2] = 65
	return mid;
*/
#include <bits/stdc++.h> 
using namespace std; 
 
int binarySearch(int arr[], int start, int end, int x) 
{ 
	if (end >= start) { 
		// Here we find the miod element 
		int mid = start + (end - start) / 2; 
		
		if (arr[mid] == x) 
			return mid; 
			
		if (arr[mid] > x) 
			return binarySearch(arr, start, mid - 1, x); 
 
		return binarySearch(arr, mid + 1, end, x); 
	} 

	return -1; 
} 

int main(void) 
{ 
	 int search; 
	int arr[] = { 10,22,45,56,60,69,74,7,98,100,845 }; 
	cout << "Element to search in array : ";
	cin >> search;
   
    int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n-1, search); 
	if(result == -1){
		cout << "Element is not present in array";
	}
	else{
		cout <<  "Element is present at index " << result;
	}
				
	return 0; 
} 

