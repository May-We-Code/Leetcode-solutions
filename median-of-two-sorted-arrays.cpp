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

//  updated solution using binary search 

#include<bits/stdc++.h>
using namespace std;

float median(int num 1[],int num2[],int m,int n) {
    if(m>n)
        return median(nums2,nums1,n,m);//ensuring that binary search happens on minimum size array
        
    int low=0,high=m,medianPos=((m+n)+1)/2;
    while(low<=high) {
        int cut1 = (low+high)>>1;
        int cut2 = medianPos - cut1;
        
        int l1 = (cut1 == 0)? INT_MIN:nums1[cut1-1];
        int l2 = (cut2 == 0)? INT_MIN:nums2[cut2-1];
        int r1 = (cut1 == m)? INT_MAX:nums1[cut1];
        int r2 = (cut2 == n)? INT_MAX:nums2[cut2];
        
        if(l1<=r2 && l2<=r1) {
            if((m+n)%2 != 0)
                return max(l1,l2);
            else 
                return (max(l1,l2)+min(r1,r2))/2.0;
        }
        else if(l1>r2) high = cut1-1;
        else low = cut1+1;
    }
    return 0.0;
}

int main() {
    int nums1[] = {1,4,7,10,12};
    int nums2[] = {2,3,6,15};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);
    cout<<"The Median of two sorted arrays is"<<fixed<<setprecision(5)
    <<median(nums1,nums2,m,n);
    return 0;
}
