#include<bits/stdc++.h>
using namespace std;

//----------------------------------------------
// 1. find the largest number from N number of array 
// void largest(int arr[],int n){
//     int largestNum = arr[0];
//     for(int i =1; i <n; i++){
//         if(arr[i] > largestNum){
//             largestNum = arr[i];
//         }
//     }
//     cout<<largestNum;


// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i< n; i++){
//         cin>>arr[i];
//     }
//     largest(arr,n);
//     return 0;
// }

//---------------------------------------------------
//2. second largest number from Array // or can be second smallest 
// brute force solution 
// int Secondlargesst(const vector<int> &a){
//     int largestNum = a[0];
//     int secondLargestNum = -1;

//     for ( int i =1; i< a.size();i++){
//         if( a[i]> largestNum){
//             largestNum = a [i];
//         }
//     }
//     for ( int j = a.size()- 2;j>= 0;j--  ){
//         if( a[j] != largestNum){
//             secondLargestNum = a[j];
//         }
//         return secondLargestNum;
//     }
// }


// int main(){
//     int n;
//     cin>> n;
//     vector<int> arr(n);
//     for( int i=0; i < n; i++){
//         cin>> arr[i];
//     }
//     cout<< "Second largest number " <<Secondlargesst(arr);
//     return 0;
// }

// optimal solution ------------
// second largest and second smallest

// int SeconlargestNum(const vector<int> &a){
//     int Largest = a[0];
//     int SecLargest = -1;
//     for( int i=1; i < a.size(); i ++){
//         if(a[i]> Largest){
//             SecLargest = Largest;
//             Largest = a[i];
//         }
//         else if(a[i]< Largest && a[i]> SecLargest){
//             SecLargest = a[i];
//         }
//     }
//     return SecLargest;

// }
// int SeconSmallestNum (const vector<int> &a){
//     int smallest = a[0];
//     int ssmallest = INT_MAX;
//     for( int i= 1 ; i < a.size(); i ++){
//         if( a [i]< smallest){
//             ssmallest = smallest;
//             smallest = a[i];
//         }else if( a[i] != smallest && a[i] < ssmallest){
//             ssmallest = a[i];
//         }
//     }
//     return ssmallest;
// }

// int main(){
//     int n;
//     cin>> n;
//     vector<int> arr(n);
//     for( int i=0; i < n; i++){
//         cin>> arr[i];
//     }
//     cout<< "Second largest number " <<SeconlargestNum(arr)<<endl;
//     cout<< " Second smallest number " <<SeconSmallestNum(arr);
//     return 0;
// }

//---------------------------------------------------------
// 3. check if the Array is shorted or not 

string shorted( vector<int> &a){
        for (int i =1; i < a.size(); i++){
        if(a[i]>=a[i-1]){
            
        }else {
            return " Array is not sorted";
        }
    }
    return "Given Array is sorted";

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i= 0 ; i< n; i++){
        cin>> arr[i];
    }
    cout<<shorted(arr);
    return 0;
}