
import java.util.Scanner;


//import java.util.ArrayList;

public class StringCode {
    public static int stringcode(String input) {
        input = input.toLowerCase();
        String str[] = input.split(" ");
        int i, j, sum;
        String ans = "";
        for (String str1 : str) {
            i = 0;
            j = str1.length() - 1; 
            sum = 0;
            while (i <= j) {
                if (i == j) {
                    sum += (int) (str1.charAt(i) - 'a' + 1);
                } else {
                    sum += Math.abs((int) (str1.charAt(i) - 'a' + 1) - (int) (str1.charAt(j) - 'a' + 1));
                }
                //System.out.println("j: " + str[x].charAt(j) + " i: " + str[x].charAt(i) + " Sum: " + sum);
                i++;
                j--; 
            }
            ans += String.valueOf(Math.abs(sum));
            //System.out.println("Ans: " + ans);
        }
        return Integer.parseInt(ans);
    }

    public static void main(String[] args) {
        String input;
        try (Scanner scn = new Scanner(System.in)) {
            input = scn.nextLine();
        }
        System.out.println(stringcode(input));
    }
}