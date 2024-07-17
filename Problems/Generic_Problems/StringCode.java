
import java.util.Scanner;


//import java.util.ArrayList;

public class StringCode {
    public static int stringcode(String input) {
        input = input.toLowerCase();
        String str[] = input.split(" ");
        int i, j, sum;
        String ans = "";
        for (int x = 0; x < str.length; x++) {
            i = 0;
            j = str[x].length() - 1; 
            sum = 0;
            while (i <= j) {
                if (i == j) sum += (int)(str[x].charAt(i) - 'a' + 1);
                else sum += Math.abs((int)(str[x].charAt(i) - 'a' + 1) - (int)(str[x].charAt(j) - 'a' + 1));
                //System.out.println("j: " + str[x].charAt(j) + " i: " + str[x].charAt(i) + " Sum: " + sum);
                i++;
                j--; 
            }
            ans += String.valueOf(Math.abs(sum));
            //System.out.println("Ans: " + ans);
        }
        return Integer.valueOf(ans);
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String input = scn.nextLine();
        scn.close();
        System.out.println(stringcode(input));
    }
}