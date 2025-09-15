#include<bits/stdc++.h>
using namespace std;



// // chechking the number for occurence in given array( digit) with hashing

// int main(){
//    int n ;
//    cin>> n;
//    int arr[n];
//    for(int i =0;i<n;i++){
//       cin>>arr[i];
//    }

//    // pre compute 
//    int hash[13] = {0};
//    for (int i= 0 ; i<n;i++){
//       hash[arr[i]] += 1;
//    }


//    // taking query
//    int q;
//    cin>>q;
//    while(q--){
//       int number;
//       cin>> number;
//       // fetch 
//       cout<<hash[number]<< endl;
//    }

//    return 0;
// }

// checking the number of occrence in array ( character)

// int main(){
//    string s;
//    cin>>s;
//    int q;
//    cin>> q;

//    // pre compute 
//    int hash[26] = {0};
//    for (int i =0 ; i<s.size();i++){
//       hash[s[i] -'a']++;
//    }

//    //taking query characters
//    while( q--){
//       char c;
//       cin>> c;
//       //fetch pre compute data
//       cout<<hash[c - 'a']<< endl;
//    }
//    return 0;
// }


// map 
int main (){
   int n;
   cin>>n;
   int arr[n];
   for ( int i  = 0 ; i < n; i++){
         cin>> arr[i];
   }
   // pre compute 
   map<int,int> mpp;
   for( int i =0; i <n ; i++){
      mpp[arr[i]]++;
   }


   int q ;
   cin>> q;
   while(q--){
      int number;
      cin>> number;
      // fetch 
      cout<<mpp[number]<< endl;
   
      
   }
   return 0;
}
