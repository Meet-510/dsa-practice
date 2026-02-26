import java.util.Arrays;
public class FindEvanNum {
    public static void main(String args[]){
        int[][] accounts = {
            {1,2,3},
            {22,3,4}
        };
        System.out.print(maxWealth(accounts));
    }
    public static int maxWealth(int[][] accounts){
        int ans = Integer.MIN_VALUE;
        for(int r=0; r < accounts.length; r++){
            int sum =0;
            for( int j=0; j < accounts[r].length ; j++){
                    sum += accounts[r][j];
            }
            if(sum > ans){
                ans = sum ;
            }
        }
        return ans;    
    }
}
