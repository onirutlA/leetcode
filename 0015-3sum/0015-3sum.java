class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> result = new HashSet<>();
        
        Arrays.sort(nums);
        for(int i = 0; i < nums.length; i++){
            
            int target = -nums[i];
            int j = i + 1;
            int k = nums.length - 1;
            
            while(j < k){
                int sum = nums[j] + nums[k];
                
                if(sum < target)
                    j++;
                else if(sum > target)
                    k--;
                else {
                    List<Integer> list = Arrays.asList(nums[i], nums[j], nums[k]);
                    result.add(list);
                    
                    while(j < k && nums[j] == list.get(1))
                        j++;
                    
                    while(j < k && nums[k] == list.get(2))
                        k--;
                }
            }
            
            while(i + 1 < nums.length && nums[i + 1] == nums[i])
                i++;
        }
        
        return List.copyOf(result);
        
    }
}