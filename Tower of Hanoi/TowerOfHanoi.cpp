/*
	program to implement the Tower of Hanoi.
	================METHOD==================
	if A = <source>  B = <destination>  C = <auxiliary>
	1st --> 'A','C','B'
	2nd --> 'A','B','C'
	3rd --> 'B','C','A'
	
	Take an example for 2 disks :
	Let A = <source>  B = <destination>  C = <auxiliary>
	
	Step 1 : Shift first disk from 'A' to 'B'.
	Step 2 : Shift second disk from 'A' to 'C'.
	Step 3 : Shift first disk from 'B' to 'C'.
	
		
*/

#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int input, char source, char destination, char auxiliary){
	if(input == 1){
		cout << "Move disk 1 from "<<source<<" to "<<destination << endl;
		return;
	}
	TowerOfHanoi(input-1,source,auxiliary,destination);
	cout << "Move disk "<<input<<" from "<<source<<" to "<<destination << endl;
	TowerOfHanoi(input-1,auxiliary,destination,source);
}

int main(){
	cout << " A = <source>  B = <destination>  C = <auxiliary>\n";
	int input;
	cout << " Enter the Number of DISC : ";
	cin >> input;
	TowerOfHanoi(input,'A','C','B');
	return 0;
}

