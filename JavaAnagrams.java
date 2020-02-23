import java.util.Scanner;

public class Solution {

        
    static boolean isAnagram(String a, String b) {
         int[]  counterA= new int[256];
         int[]  counterB= new int[256];
          a=a.toUpperCase();
          b=b.toUpperCase();

         for(int i=0; i<a.length();i++){
           counterA[(int)a.charAt(i)]++;
         }
        
         for(int i=0; i<b.length();i++){
           counterB[(int)b.charAt(i)]++;
         }

         for(int i=0; i<256;i++)
             if(counterA[i]!=counterB[i])
             return false;
         return true;

    }
    

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
