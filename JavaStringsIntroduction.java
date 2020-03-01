import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int length=0,i=0 ;
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        length = A.length()+B.length();
        System.out.println(length);

        i=B.compareTo(A);
        
         if(i==0){
            System.out.println("No");
         }
         else if(i>0) {
            System.out.println("No");
        }        
        else{
            System.out.println("Yes");
        }

        A= A.substring(0, 1).toUpperCase()+A.substring(1);
        B= B.substring(0, 1).toUpperCase()+B.substring(1);
        System.out.println(A+" "+B);
    }
}



