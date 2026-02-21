import java.util.*;

public class Findmin {
    public static void main(String[] args) {
        int[] arr = {1,-2,5,3,44};
        System.out.println(min(arr));
    }
    static int min(int[] arr){
        int ans = arr[0];
        for(int i=1;i<arr.length;i++){
            if(arr[i]<ans){
                ans = arr[i];
            }
        }
        return ans;

    }
}
