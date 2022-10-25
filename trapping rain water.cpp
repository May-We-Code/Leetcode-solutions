// trapping rain water
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmax(n),rmax(n);
        lmax[0]=0;
        
        for(int i=1;i<n;i++)
            lmax[i]=max(lmax[i-1],height[i-1]);
        rmax[n-1]=0;
        for(int i=n-2;i>=0;i--)
            rmax[i]=max(rmax[i+1],height[i+1]);
        int water=0;
        for(int i=0;i<n;i++)
        {
            if(min(lmax[i],rmax[i])>height[i])
                water+=min(lmax[i],rmax[i])-height[i] ;
            else
                water+=0;
        }
        return water;
    }
};