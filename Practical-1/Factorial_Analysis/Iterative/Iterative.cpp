#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    int fact = 1, cnt=0;
    cnt++;
    cnt++;
    for(int i=1; i<=n; i++){
       cnt++;
       cnt++;
       fact = fact * i;
       cnt++;
    }
    cnt++;
    cout<<"The Factorial is: "<<fact<<endl;
    cnt++;
    cout<<"The Counter is: "<<cnt<<endl;
    return 0;
}
