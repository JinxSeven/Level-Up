import java.util.Scanner;

public class GetCodeStrings {
    public static int getcodestrings(String input) {
        String str[] = input.split(" ");
        int sum = 0;
        for (int x = 0; x < str.length; x++) {
            sum += str[x].length();
        }
        //System.out.println("Sum: " + sum);
        int ans = 0;
        while (sum > 0) {
            ans += sum % 10;
            sum /= 10;
            //System.out.println("Ans: " + ans + " Sum: " + sum);
            if (ans >= 10) {
                sum = ans;
                ans = 0;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String input = scn.nextLine();
        scn.close();
        System.out.println(getcodestrings(input));
    }
}
