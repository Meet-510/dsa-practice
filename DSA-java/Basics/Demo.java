import java.util.*;
public class Demo{
public static void main(String[] args){
   /* Scanner input = new Scanner(System.in);
     int rollno = input.nextInt();
    System.out.println("Your roll number is " + rollno);
    String name = input.nextLine();
    System.out.print(name);
     */
    /*Scanner input = new Scanner(System.in);
    int salary = input.nextInt();
    if(salary >= 25000){
        salary = salary + 5000;
    }else {
        salary = salary + 1000;
    }
    System.out.println(salary);
   
   for(int num=1;num <=5; num ++){
    System.out.println(num);
   }
     */

   Scanner in = new Scanner(System.in);
   int a = in.nextInt();
   int b = in.nextInt();
   int c = in.nextInt();
   int max = a;
   if(b>max){
    max = b;
   }
   if(c>max){
    max=c;

   }
   System.out.println(max);
}
}

