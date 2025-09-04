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
   int n ;
   cin>>n;
   // printDigitBT(n,n);
   // printBackDigitBT(n,n);
   sumPara(n,0);

}
    



