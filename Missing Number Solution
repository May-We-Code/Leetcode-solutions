class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        if(nums.size()==1 && nums[nums.size()-1]>0)
        {
            return nums[nums.size()-1]-1 ; 
        }
        int number = 0 ;
        sort(nums.begin() , nums.end()) ;
       for(int i=0 ; i<nums.size()-1 ; i++)
       {
           if((nums[i+1]-nums[i])>1)
           {
               number = nums[i]+1 ;
           }
       }
        if(number>0)
        {
            return number ;
        }
        else if(number==0 && nums[0]==1 )
        {
            return 0 ;
        }
        else
        {
            return nums[nums.size()-1]+1 ;
        }
    }
};
