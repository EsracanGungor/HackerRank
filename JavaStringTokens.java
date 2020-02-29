import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

         s = s.trim(); 
         
         if (s.length() == 0) {
            System.out.println(0);
            return;
        }
        
        String[] parsedString = s.split("[ !,?\\._'@]+",0);
       
        System.out.println(parsedString.length);
        for (String tempParsedString : parsedString) {
            System.out.println(tempParsedString);
        }

        scan.close();
    }
}

