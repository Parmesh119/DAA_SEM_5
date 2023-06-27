#include <iostream>
using namespace std;
int cnt=0;
int fib(int x) {
   if((x==1)||(x==0)) {
       cnt++;
       cnt++;
       cnt++;
      return(x);
   }
   cnt++;
   cnt++;
   cnt++;
   cnt++;
    return(fib(x-1)+fib(x-2));
}
int main() {
   int x , i=0;
   cnt++;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   cnt++;
   while(i < x) {
      cout << " " << fib(i);
      cnt++;
      cnt++;
      cnt++;
      i++;
   }
   cnt++;
   cout<<"The Counter is: "<<cnt;
   return 0;
}
