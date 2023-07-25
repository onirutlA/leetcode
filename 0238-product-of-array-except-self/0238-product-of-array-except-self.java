class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] result = new int[nums.length];

        int sum = 1;
        int countZero = 0;
        for (int i : nums) {
            if (i == 0)
                countZero++;
            else
                sum *= i;
        }

        if (countZero > 1)
            return result;

        for (int i = 0; i < nums.length; i++) {
            if (countZero == 1)
                nums[i] = nums[i] == 0 ? sum : 0;
            else
                nums[i] = sum / nums[i];
        }

        return nums;

    }
}