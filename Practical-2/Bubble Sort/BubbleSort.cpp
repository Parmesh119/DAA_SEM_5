#include<bits/stdc++.h>
using namespace std;
int cnt1=0, cnt2=0, cnt3=0;
void Bubble(int arr[], int n){
    cnt1++;
    for (int i = 0; i < n; i++) {
        cnt1++;
        cnt1++;
        bool swap=false;
        cnt1++;
        cnt1++;
        for (int j = i+1; j < n; j++) {
            cnt1++;
            cnt1++;
            cnt2++;
            if(arr[i] > arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                cnt1+=3;
                cnt3++;
                swap=true;
                // cnt3++;
            }
         
        }
        cnt1++;
        cnt1++;
        if(!swap){
            break;
        }
    }
    cnt1++;
    for (int k = 0; k < n; k++) {
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
    for (int i = 0; i < n; i++) {
        bubble[i]=n-i;
    }
    cnt1++;
    Bubble(bubble, n);
    cout<<"The instruction counter is: "<<cnt1<<endl;
    cout<<"The comparision counter is: "<<cnt2<<endl;
    cout<<"The swaping counter is: "<<cnt3<<endl;
    cnt1++;
    return 0;
}
