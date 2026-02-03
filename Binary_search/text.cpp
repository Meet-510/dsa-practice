#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target){
  if(low > high) return -1;
  int mid = (low + high )/ 2;
  if( arr[mid] == target) return mid;
  else if(target > arr[mid])
  return binarySearch(arr,mid+1,high,target);
  return binarySearch(arr,low,mid-1,target);

}

int main(){
   int n;
   cin>> n;
   int arr[n];
   for(int i =0; i< n; i++) cin >> arr[i];
   int target;
   cin>> target;
  return binarySearch(arr,0,n-1,target);
   

}

