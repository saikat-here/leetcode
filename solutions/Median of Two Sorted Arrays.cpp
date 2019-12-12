/*
LeetCode Problem :  There are two sorted arrays nums1 and nums2 of size m and n respectively.
                    Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
                    You may assume nums1 and nums2 cannot be both empty.
          
Copyright (c) Saikat Sinha Ray
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        // Declaring a vector with size m+n
        vector <int> nums3((nums1.size()+nums2.size()),-1);
        int i=0,j=0,k=0;
        
        // Any one input vector can be empty. If any one is empty then merge is not required. 
        if ((nums1.size()!=0) && (nums2.size()!=0))
        {
            for (;k<=(nums1.size()+nums2.size());)
            {
                nums3[k++]=nums1[i]>=nums2[j] ? nums2[j++]:nums1[i++];
                if ((i==nums1.size()) || (j==nums2.size())) // Vector size may not be equal. It will break when one vector reached to its end.
                    break; 
            }
        }
        
        //Now, it will migrate the positions of the vector that NOT reached to its end.
        
        // If nums1 NOT reached to its end
        while (i<(nums1.size()+0))
        {
            nums3[k++]=nums1[i++];
        }

        // If nums2 NOT reached to its end
        while (j<(nums2.size()+0))
        {
            nums3[k++]=nums2[j++];
        }
        /*
          If the size of marged vector (nums3) is odd then it will have a Median position. Median possition will be (size of num3)/2
          If the size of marged vector (num3) is even then there will be NO Median position, need to find the average of 2 middle possition.
          So, the average value will be (nums3[nums3.size()/2]+nums3[(nums3.size()/2)-1])/2).
                    Example : [3,4,5,6] => Need tind average of 4 and 5. 
        */
        return nums3.size()%2==0 ? ((double)(nums3[nums3.size()/2]+nums3[(nums3.size()/2)-1])/2) : nums3[(int)nums3.size()/2];    
    }
};
