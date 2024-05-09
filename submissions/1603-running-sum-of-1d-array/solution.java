public class Solution {
    public int[] runningSum(int[] nums) {
        int[] result = new int[nums.length];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            result[i] = nums[i] + sum;
            sum += nums[i];
        }
        return result;
    }
}
