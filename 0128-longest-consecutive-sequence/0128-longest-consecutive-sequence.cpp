class Solution {
public:
    int longestConsecutive(vector<int>& nums) { 
        unordered_set<int> set;
        for (int i : nums) {
            set.insert(i);
        }
        
        int longestStreak = 0;
        for(auto num : set){
            if(set.find(num -1) == set.end()){
                int currentNum = num;
                int currentStreak = 1;

                while(set.find(currentNum + 1) != set.end()){
                    currentNum +=1;
                    currentStreak +=1;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};