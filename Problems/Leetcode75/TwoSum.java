public class TwoSum {
    public int[] twoSum(int nums[], int target) {
        int out[] = new int[2];
        for (int i = 0; i < (nums.length) - 1; i++) {
            for (int j = i + 1; j < (nums.length); j++) {
                if (nums[i] + nums[j] == target) {
                    out[0] = i; out[1] = j;
                    return out;
                }
            }
        }
        return null;
    }

    public static void main(String args[]) {
        TwoSum one = new TwoSum();
        int nums[] = {3,2,2};
        int target = 7;
        int result[] = one.twoSum(nums, target);
        for (int x : result) {
            System.out.print(x + " ");
        }
    }
}