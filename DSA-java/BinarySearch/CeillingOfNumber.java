package BinarySearch;
//Smallest element in Array greater or equal to target arr{1,2,4,5,6} target=3 , ans =4
public class CeillingOfNumber {
    public static void main( String args[]){
        int[] arr ={1,2,3,5,6,7,9};
        int target = 4;
        int ans = ceillingNum(arr, target);
        System.out.println(ans);
    }

      static int ceillingNum(int[] arr, int target){
        int start =0;
        int end = arr.length -1;
        while(start<= end){
            int mid = start + ( end - start) /2;
            if(target < arr[mid]){
                end = mid -1;
            } else if( target > arr[mid]){
                start = mid + 1;
            }else{
                return mid;
            }
        }
        return arr[start];
    }
    
}
