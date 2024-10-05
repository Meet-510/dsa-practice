public class Binary{

public static void main(String[] args){
    int nums[] = new int[1000];
    int target = 900;

    // int result = linearSearch(nums,target);
    int result1 = binarySearch(nums,target);
    int result2 = linearSearch(nums, target);



    if(result1 != -1)
        System.out.println("Element found at :"+result1 , result2);
    else
        System.out.println("Element not found!!!");

}
   
        public static int linearSearch(int[] nums, int target){
            int steps = 0;
            for(int i=0;i<=nums.length;i++){
                steps++;
                if(nums[i] == target){
                    System.out.println("step by linear search"+ steps);
                    return i;
                }
                
            }
            System.out.println("step by linear search"+ steps);
            return -1;
           
        }

        public static int binarySearch(int[] nums, int target){
            int steps = 0;
            int left = 0 ;
            int right = nums.length-1;

            while (left <= right){
                steps++;
                int mid = (left+ right )/2;

                if(nums[mid] == target){
                    System.out.println("step by binary search"+ steps);
                    return mid;
                }
                else if (nums[mid]< target){
                    left = mid +1;
                }
                else 
                    right = mid - 1;
                

                
            }
            System.out.println("step by binary search"+ steps);
            return -1;
        }

    }
    //simple Linear Search