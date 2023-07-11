#include <bits/stdc++.h>
using namespace std;
int cnt=0, comp=0, swp=0;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    cnt++;
    for (i = 0; i < n - 1; i++) {
        cnt++;
        cnt++;
        min_idx = i;
        cnt++;
        cnt++;
        for (j = i + 1; j < n; j++) {
            cnt++;
            cnt++;
            comp++;
            if (arr[j] < arr[min_idx]){
                cnt++;
                min_idx = j;
            }
        }
        cnt++;
        if (min_idx != i){
            cnt++;
            swp++;
            swap(arr[min_idx], arr[i]);
        }
    }
    cnt++;
    cnt++;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
 
int main()
{
    int n;
    //size
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i]=n-i;    
    }
    cnt++;
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    cnt++;
    printArray(arr, n);
    cnt++;
    cout<<"The instruction counter is: "<<cnt<<endl;
    cout<<"The comparision counter is: "<<comp<<endl;
    cout<<"The swaping counter is: "<<swp<<endl;
    return 0;
}
 
// This is code is contributed by rathbhupendra
