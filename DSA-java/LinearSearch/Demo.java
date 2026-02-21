
import java.util.*;

// public class Demo{
//     public static void main(String[] args){
//         int[] nums = {22,43,43,23,13};
//         int target = 13;
//         int ans = linearSearch(nums, target);
//         System.out.println(ans);
//     }
//     static int linearSearch(int[] arr,int target){
//         if(arr.length == 0){
//             return -1;
//         }
//         for(int i=0;i<arr.length;i++){
//             int element = arr[i];
//             if(element == target){
//                 return i;
//             }

//         }
//         return -1;
//     }
// }

public class Demo{
    public static void main(String[] args) {
        String name = "meet";
        char target = 'k';
        System.out.println(search(name, target));


    }
    static boolean search(String str, char target){
    if(str.length()== 0){
        return false;
    }
    for(int i=0;i<str.length();i++){
        if(target == str.charAt(i)){
            return true;
        }
    }
    return false;
    }
}