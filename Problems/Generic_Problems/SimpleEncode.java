import java.util.*;

class Result {
    public final int ans1;
    public final int ans2;
    
    public Result(int ans1, int ans2) {
        this.ans1 = ans1;
        this.ans2 = ans2;
    }
}

public class SimpleEncode {
    public static Result encodedArray(int[] array, int size) {
        Stack<Integer> buckets = new Stack<Integer>();
        buckets.push(array[size - 1]);
        for (int x = size - 2; x >= 0; x--) {
            //System.out.print(array[x]);
            buckets.push(array[x] - buckets.peek());
        }
        for (int x = 0; x < size; x++) {
            array[x] = buckets.pop();
            //System.out.print(array[x] + " ");
        }
        Result out = new Result(array[0], Arrays.stream(array).sum());
        return out;
    }
    
    public static void main(String[] args) {
        int array[] = {-2, -7, -12, -15};
        Result ans = encodedArray(array, array.length);
        System.out.println(ans.ans1);
        System.out.println(ans.ans2);
    }
}