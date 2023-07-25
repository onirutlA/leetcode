class Solution {
public:
    int trap(vector<int> &heights) {
        int n = heights.size();
        
        int l = 0;
        int r = n - 1;

        int maxL = heights[l];
        int maxR = heights[r];

        int result = 0;
        while (l < r) {
            if(maxL <= maxR){
                ++l;
                maxL = max(maxL, heights[l]);
                result = result + (maxL - heights[l]);
            }else{
                --r;
                maxR = max(maxR, heights[r]);
                result = result + (maxR - heights[r]);
            }
        }

        return result;
    }
};