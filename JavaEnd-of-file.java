import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       
        Scanner stdin = new Scanner(System.in);

            int value = 1;
            while (stdin.hasNextLine()){
            String line = stdin.nextLine();
            if(line.isEmpty())
               break;
            System.out.println(value + " " + line);
            value++;
            }
        stdin.close();
   }
}


