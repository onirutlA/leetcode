class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = 0;
        
        for(int next = 1; next < nums.size(); next++){
            if(nums[curr] != nums[next]){
                curr++;
                nums[curr] = nums[next];
            }
        }
        return ++curr;
    }
};