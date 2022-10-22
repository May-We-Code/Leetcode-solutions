class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            int temp = target - nums[i];
            if(m[temp] > 0){
                return {m[temp] - 1,i};
            }
            m[nums[i]] = i + 1;
        }
        return {-1,-1};
    }
};


//  updated solution of two sum leetcode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();++i)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                return {mpp[target-nums[i]],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
        
    }
};

