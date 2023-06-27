#include <iostream>
using namespace std;
int  cnt=0;
int fact(int n) {
    cnt++;
   if ((n==1)){
    cnt++;
       return 1;
   }
   cnt++;
   cnt++;
   cnt++;
    return n*fact(n-1);
       
}
int main() {
   int n;
   cout<<"n: ";
   cin>>n;
   cnt++;
   cout<<fact(n)<<endl;
   cnt++;
   cout<<"Counter is: "<<cnt<<endl;
   return 0;
}
