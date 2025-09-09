#include<bits/stdc++.h>
using namespace std;

// print name n times
void printFun(string name, int n){
   if (n == 0) return;

   cout<<name;
   printFun(name, n -1);

}

// print linearly from 1 to n 
void printDigit(int i, int n){
   if(i>n)return ;
   cout<<i;
   printDigit(i+1,n);
   
}

// print backwards from n to 1 
void printBackDigit(int i, int n){
      if(i<1)return;
      cout<<i;
      printBackDigit(i-1,n);
}

// print 1 to n ( but with backtracking)

void printDigitBT(int i, int n){
   if(i < 1) return ;
   printDigitBT(i - 1, n);
   cout<<i;
}

// print backwards n to 1 ( with backtracking) 

void printBackDigitBT(int i, int n){
   if(i < 1) return ;
   cout<<i;
   printBackDigitBT(i - 1, n); 
}

// print sum of the first N numbers ( parameterized way) 

void sumPara( int i,int sum){
   if(i< 1){
      cout<<sum;
      return;
   }
   sumPara(i-1,sum + i);
}
// print sum of the first N numbers (functional way)

int sumPara2(int n){
   if(n == 0) return 0;
   return n + sumPara2(n -1);
}

// print factorial (functional recursive way) 

int fact(int n){
   if(n == 0) return 1;
   return n * fact(n -1);
}

void swapArr(int a[],int l, int r){
   if(l>=r)return  ;
   swap(a[l],a[r]);
   swapArr(a,l+1,r-1);

}

int fibo(int n ){
   if( n <= 1){
      return n;
   }
   int last = fibo(n -1);
   int slast = fibo(n -2);
   return last + slast;
}

int main(){
   // for printFun 
   // string name ;
   // int n;
   // cin>>name;
   // cin>>n;
   // printFun(name,n);
   // printDigit(1,n);
   // printBackDigit(n,n);

   // for printDigitBT 
   
   // cin>>n;
   // printDigitBT(n,n);
   // printBackDigitBT(n,n);
   // sumPara(n,0);
   // cout<<sumPara2(n);
   // cout<<fact(n);
   // int n ;
   // cin>>n;
   // int a[n];
   // // Take input
   //  for(int i = 0; i < n; i++) cin >> a[i];

   //   // Call recursive function
   //  swapArr(a, 0, n-1);

   //      // Print reversed array

   // for(int i = 0; i < n; i++) cout << a[i] << " ";
   //  return 0;

   // fibonacci
   cout << fibo(4);
   

}
    



