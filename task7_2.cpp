
// Q.2: Write a program to find GCD of any array having more than two elements. //

#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (a == 0)
      return b;
   return gcd(b%a, a);
}
int ArrayGcd(int A[], int n) {
   int res = A[0];
   for(int i = 1; i < n; i++) {
      res = gcd(A[i], res);
   }
   return res;
}
main() {
   int A[] = {4, 8, 16, 24};
   int n = sizeof(A)/sizeof(A[0]);
   cout << "GCD of array elements: " << ArrayGcd(A, n);
}
