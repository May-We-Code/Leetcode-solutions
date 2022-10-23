class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> water(n,0);
        int highest = 0;
        for(int i = 0; i < n ; i++){
            if(highest <= height[i]){
                highest = height[i];
            }
            water[i] += (highest - height[i]);
        }
        highest = 0;
        int waterTrapped = 0;
        for(int i = n-1 ; i>=0 ; i--){
            if(highest < height[i]){
                highest = height[i];
            }
            water[i] = min(water[i] , highest - height[i]);
            waterTrapped += water[i];
        }
        return waterTrapped;
    }
};
