class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0,n = nums1.size(), m = nums2.size(),last = 0,cur = 0,k = (n + m)/2;
        for(i = 0,j = 0;i<n && j < m && k>=0; k--){
            last = cur;
            if(nums1[i] <= nums2[j]) cur = nums1[i++];
            else cur = nums2[j++];
        }
        for(;i<n && k>=0; k--,i++){
            last = cur;
            cur = nums1[i];
        }
        for(;j < m && k>=0; k--,j++){
            last = cur;
            cur = nums2[j];
        }
        return (n+m)%2?cur : double(last + cur)/2;
    }
};
