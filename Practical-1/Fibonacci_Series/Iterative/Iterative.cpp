#include <iostream>
using namespace std;
int cnt=0;
void fib(int num) {
   int x = 0, y = 1, z = 0;
   cnt++;
   cnt++;
   cnt++;
   cnt++;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
      cnt++;
      cnt++;
      cnt++;
      cnt++;
      cnt++;
   }
   cnt++;
}
int main() {
   int num;
   cout << "Enter the number : "<<endl;
   cin >> num;
   cout << "\nThe fibonacci series : " <<endl;
   cnt++;
   fib(num);
   cnt++;
   cout<<"The Counter is: "<<cnt<<endl;
   return 0;
}
