package BinarySearch;

public class AgnosticBinary {
    //Agnostic Binary search means : you are given an sorted array, but you dont know wheather its in ascending or dscending order
    public static void main (String args[]){
            int[] arr = {99,88,77,6,5,4,3,2,1};
            int target = 88;
            System.out.println(AgnosticSearch(arr, target));
    }
    static int AgnosticSearch(int[] arr, int target){
        int start = 0;
        int end = arr.length -1;
        boolean isAsc = arr[start] > arr[end];
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(isAsc){
                if(target < arr[mid]){
                end = mid -1;
            } else{
                start = mid + 1;
            }
            }else{
                
                if(target > arr[mid]){
                end = mid -1;
            } else{
                start = mid + 1;

            }
        }
    }
   
    return -1;
}
}
