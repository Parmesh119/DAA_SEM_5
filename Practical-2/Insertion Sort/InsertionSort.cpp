// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;
int cnt=0, swp=0, comp=0;
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	cnt++;
	for (i = 1; i < n; i++) {
	    cnt++;
	    cnt++;
	    cnt++;
	    cnt++;
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key,
		// to one position ahead of their
		// current position
		cnt++;
		cnt++;
		while (j >= 0 && arr[j] > key) {
			comp++;
			swp++;
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		cnt++;
		cnt++;
		arr[j + 1] = key;
	}
	cnt++;
	cnt++;
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
    int n;
    cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    arr[i]=n-i;  
	}
	cnt++;
	cnt++;
	insertionSort(arr, n);
	printArray(arr, n);
    cnt++;
    cout<<"The instruction counter is: "<<cnt<<endl;
    cout<<"The comparision counter is: "<<comp<<endl;
    cout<<"The swaping counter is: "<<swp<<endl;
	return 0;
}
// This is code is contributed by rathbhupendra
