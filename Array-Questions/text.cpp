
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

// string shorted( vector<int> &a){
//         for (int i =1; i < a.size(); i++){
//         if(a[i]>=a[i-1]){
            
//         }else {
//             return " Array is not sorted";
//         }
//     }
//     return "Given Array is sorted";

// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i= 0 ; i< n; i++){
//         cin>> arr[i];
//     }
//     cout<<shorted(arr);
//     return 0;
// }

// 3 . Remove duplicate in-place sorted Array 
// return unique element count 
// input [1,1,2,2,3,3] out: [1,2,3] 
// int removeDuplicate(int arr[], int n){
//         int i =0;
//         for (int j = 1; j<n; j ++){
//             if(arr[i]!= arr[j]){
//                 arr[i+1] = arr[j];
//                 i ++;
//             }

//         }
     
//         return i+1;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0; i< n; i++){
//         cin>> arr[i];
//     }
//     cout<<removeDuplicate(arr,n);
//     return 0;
// }

// 4 . rotate the array to left by position 
// input : [ 1,2,3,4,5]
// outpur = [2,3,4,5,1]

// void rotateArrLeft(int arr[],int n){
//     int temp = arr[0];
//     for(int i= 1; i< n; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
  
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0; i< n; i++){
//         cin>> arr[i];
//     }
//     rotateArrLeft(arr,n);
//     for (int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 4 . rotate the array to left by Dth position 
// D can be any 
// D = 3 
// input : [ 1,2,3,4,5,6,7]
// outpur = [4,5,6,7,1,2,3]
// void leftRotateByD(int arr[],int n,int d){
//   reverse(arr, arr+d);
//   reverse(arr+d, arr+n);
//   reverse(arr,arr+n)  ;
//   for(int i=0;i<n;i++){
//         cout<< arr[i] << " ";
//     }
  
// } 

// int main(){
//     int n ;
//     cin>> n;
//     int arr[n];
//     for(int i =0; i< n; i++){
//         cin>> arr[i];
//     }
//     int d;
//     cin>>d;
//     leftRotateByD(arr,n,d);
    
//     return 0;
// }

// 5. Move all zero to the end of ARRAY 

// void MoveZeroToEnd(int arr[], int n){
//     int j = -1;
//     for (int i = 0 ; i < n ; i++){
//         if( arr[i] == 0){
//             j = i;
//             break;
//         }
//     }

//     for(int i = j+1; i< n ; i++){
//             if (arr[i] !=2 0){
//                 swap(arr[i],arr[j]);
//                 j++;
//             }
//     }

// }


// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for( int i =0; i < n ; i ++){
//         cin>> arr[i];
//     }
//     MoveZeroToEnd(arr, n);
//     for ( int i=0; i< n; i++){
//         cout<< arr[i] << " ";
//     }
//     return 0;
// }


// 6 . Linear Search 
// find element in array 

// void findElement(int arr[],int n , int num ){
//     for( int i =0; i < n ; i ++){
//         if ( arr[i] == num ){
//             cout<<" element fount at " << i;
//             return;
//         }   
//     } 
//     cout<<"Number not found";
//     }
  

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for( int i =0; i < n ; i ++){
//         cin>> arr[i];
//     }
//     int num ;
//     cin>> num;
//     findElement(arr, n , num);
//     return 0;
// }


// 7. find the missing element from array 
// array = [1,2,3,4,6]
// ans = 5

// brute force algo 

// int findMissingEl(int arr[], int n){
//     for ( int i= 1 ; i < n; i++){
//          int flag =0;
//         for (int j =0 ; j< n; j++ ){
//             if(arr[j] == i){
//                 flag =1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
// }

// now we are using the better option ( hashing)


// int findMissingElHash( int arr[], int n){
//     int hash[n+1] = {0};
//     for (int i =0 ; i< n-1; i++){
//         hash [ arr[i]] = 1;

//     }
//     for (int i = 1; i <n; i++){
//         if (hash[i] == 0)
//         return i;
//     }

// }

// the best optimal solution ever for this prob 

// int findMissingEloptimal( int arr[], int n){
//     int sum = n * (n+1) / 2;
//     int sum2 = 0;
//     for ( int i =0; i< n-1; i++){
//         sum2 += arr[i];
//     }
//     return(sum - sum2);
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for( int i =0; i < n ; i ++){
//         cin>> arr[i];
//     }
//     // for brute force algo 
//     // cout<< findMissingEl(arr, n);
//     // the better solution 
//     // cout<< findMissingElHash(arr,n);
//     // the best optimal solution 
//     cout << findMissingEloptimal(arr, n);
//     return 0;
// }


// 8 . find the maximum consecutive ones 
// arr[ 1,1,1,0,1,1,0,1,1,1,1]
// ans = 4

// int findMaxConOnes(int arr[],int n){
//     int maxi= 0;
//     int cnt = 0;
//     for (int i =0; i < n ; i ++){
//         if ( arr[i] == 1){
//             cnt++;
//             maxi = max(maxi, cnt); 
//         }
//         else cnt =0;
//     }
//     return maxi;
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i =0; i< n; i++){
//         cin>> arr[i];

//     }
//     cout << findMaxConOnes(arr, n);
//     return 0;
// }

// find the longest sub array with sum k 
// Input:
// arr = [10, 5, 2, 7, 1, 9]
// k = 15

// Output:
// 4

int findLongestSubArr (int arr[], int n, int k){
    int longlen = 0;
    for( int i = 0 ; i < n; i++){
        for ( int j = i; j < n; j ++){
            int s = 0;
            for (int k =i; k <=j; k ++){
                s += arr[k];
            }
            if( s == k){
                    longlen = max(longlen, j-i +1);
            }   
            
        }
         
    }
    return longlen;
}

int main(){
    int n, k ;
    cin>> n>> k;
    int arr[n];
    for( int i =0; i< n; i++){
        cin>> arr[i];

    }
    cout<<findLongestSubArr(arr, n, k);
    return 0;
}