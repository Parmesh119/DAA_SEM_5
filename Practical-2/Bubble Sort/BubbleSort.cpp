#include<bits/stdc++.h>
using namespace std;
int cnt1=0, cnt2=0, cnt3=0;
void Bubble(int arr[], int n){
    cnt1++;
    int swap=0;
    cnt1++;
    for (int i = 0; i < n; i++) {
        cnt1++;
        cnt1++;
        swap=0;
        cnt1++;
        for (int j = i+1; j < n; j++) {
            cnt1++;
            cnt1++;
            cnt2++;
            if(arr[i] > arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                cnt3+=3;
                // cnt3++;
                // cnt3++;
            }
            swap++;
        }
        cnt1++;
        cnt2++;
        if(swap == 0){
            cnt1++;
            break;
        }
    }
    cnt1++;
    cnt1++;
    for (int k = 0; k < n; k++) {
        cnt1++;
        cnt1++;
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    cnt1++;
}
int main(){
    //size
    int n;
    cin>>n;
    int bubble[n];
    cnt1++;
    for (int i = 0; i < n; i++) {
        cnt1++;
        cnt1++;
        bubble[i]=n-i;
    }
    cnt1++;
    cnt1++;
    Bubble(bubble, n);
    cnt1++;
    cout<<"The instruction counter is: "<<cnt1<<endl;
    cout<<"The comparision counter is: "<<cnt2<<endl;
    cout<<"The swaping counter is: "<<cnt3<<endl;
    return 0;
}
