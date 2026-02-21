import java.util.Arrays;

public class SearchIn2DArray {
    public static void main(String[] args) {
        int[] [] arr = {
            {23,3,4},
            {13,24,34,45,99},
            {22,38,42,51,622},
            {33,423,533,222,422}
        };
        int target = 622;
        int[] ans = search(arr, target);
        System.out.println(Arrays.toString(ans));
    }
    static int [] search(int[][] arr, int target){
        for(int row = 0; row < arr.length; row++){
            for ( int col= 0; col< arr[row].length;col++){
               if(arr[row][col] == target){
                    return new int[]{row,col};
               } 
            }
        }
        return new int[]{-1,-1};
    }
}
