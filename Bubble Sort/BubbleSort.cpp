#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int n){
	int flag;
	for(int i= 0;i<n;i++){
		flag = 0;
		for ( int j = 0;j<n-i;j++){
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
	for(int i = 1; i<n+1;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
}
int main(){
	int n;
	int arr[] = {15,16,6,8,5};
	n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting \n";
	for(int i = 0; i<n;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	cout<<"After Soritng \n";
	BubbleSort(arr,n);
	return 0;
}
