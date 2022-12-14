class Solution {
public:
    int jump(vector<int>& nums) {
        int j = 0, curr = 0, maxReach = 0;
        for(int i = 0 ; i < nums.size()-1; i++){
            maxReach = max(maxReach,i+nums[i]);
            if(i == curr) {
                j++;
                curr = maxReach;
            }
        }
        return j;
    }
};
