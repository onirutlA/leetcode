class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it = count.begin(); it != count.end(); it++){
            bucket[it->second].push_back(it->first);
        }
        
        vector<int> result;
        for(int i = nums.size(); i >= 0; i--){
            if(result.size() >= k)
                break;
            
            if(!bucket[i].empty())
                result.insert(result.end(), bucket[i].begin(), bucket[i].end());
        }
        
        return result;
    }
};