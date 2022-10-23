class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            long curr = (long)nums[i]-1;
            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[curr]){
                swap(nums[i],nums[curr]);
                curr = (long)nums[i]-1;
            }
        }
        // for(int i : nums) cout<< i<<" ";
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != i+1) return i+1;
        }
        return n+1;
    }
};
