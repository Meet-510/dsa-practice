package BinarySearch;

public class FirstAndLast {
    public static void main(String args[]){
        int[] arr = {1,2,3,3,3,3,4,5,6};
        System.out.println(findFirstAndLast(arr, 3));

    }
    static int findFirstAndLast(int[] arr,int target){
        int start = 0;
        int end = arr.length -1 ;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(target == mid){
                System.err.println("first index"+ mid);
                end = mid -1;
            }else if(target > mid){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            int ans = mid;
             return ans;
            
        }
        return -1;
    }
    
}
