/*
LeetCode Problem : There are two sorted arrays nums1 and nums2 of size m and n respectively.
          Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
          You may assume nums1 and nums2 cannot be both empty.
          
Copyright (c) Saikat Sinha Ray
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {

        vector <int> nums3((nums1.size()+nums2.size()),-1);
        int i=0,j=0,k=0;
        
        if ((nums1.size()!=0) && (nums2.size()!=0))
        {
        for (;k<=(nums1.size()+nums2.size());)
        {
            
            nums3[k++]=nums1[i]>=nums2[j] ? nums2[j++]:nums1[i++];
            
            if ((i==nums1.size()) || (j==nums2.size()))
                break;
        }}
        
        while (i<(nums1.size()+0))
        {
            nums3[k++]=nums1[i++];
        }

        while (j<(nums2.size()+0))
        {
            nums3[k++]=nums2[j++];
        }
        return nums3.size()%2==0 ? ((double)(nums3[nums3.size()/2]+nums3[(nums3.size()/2)-1])/2) : nums3[(int)nums3.size()/2];    
    }
    
};
