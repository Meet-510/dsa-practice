#include<bits/stdc++.h>
using namespace std;


// count total number of digits
int countDigit(int n){
   int cnt =0;
   while( n >0){
      cnt = cnt + 1;
      n = n / 10;
   }
   cout<<"the number of digit is " <<cnt;
   
}

// reverse a  number , it should be somthing like 
// number: 10400 result : 401

int revDigit(int n){
   int revNum = 0 ;
   while(n >0){
      int lastDigit = n % 10;
      revNum = ( revNum * 10)+ lastDigit;
      n = n / 10;
   }
   cout<<revNum;
}

// palindrome
int palindrome (int n){
   int revNum = 0 ;
   int dup = n;
   while(n >0){
      int lastDigit = n % 10;
      revNum = ( revNum * 10)+ lastDigit;
      n = n / 10;
   }
   if (revNum == dup){
      cout<< "number is palindrome";
   }else cout<< "Given number is not palindrome";
}

// armstrong number 

int armstrong(int n){
   int armstroNum=0;
   int dup = n;
   while(n>0){
      int lastDigit = n % 10;
      
      armstroNum = armstroNum + ( lastDigit * lastDigit * lastDigit);
      
      n = n/10;

      
   }
   if(armstroNum == dup ) cout<< "Given number is Armstrong";
   else cout<<armstroNum <<" is not armstrong";

   
}

//print all the divisons{ 1 to n}

int divNum(int n){
   for(int i=1;i<=n;i++){
      if(n % i == 0){
         cout<<i<<", ";
      }
   }
}

// prime number ; divisible by 1 and number itself

int prime(int n){
      int cnt=0;
      for(int i = 1; i<=n;i++){
         if(n % i == 0){
            cnt++;
         }
        
      }
       if(cnt == 2){
            cout<<"given number is prime";
         }
         else cout<<n << " is not prime number";
}


int main(){
   int t;
   cin>>t;
   // countDigit(t);
   // palindrome(t);
   // armstrong(t);
   // divNum(t);
   prime(t);

   
}
   
  

    



