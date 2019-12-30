"""
    LeetCode Problem : Container With Most Water
    Copyright (c) Saikat Sinha Ray
"""

class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        endPoint=len(height)-1
        start=capacity=max_capacity=0
        
        while start<endPoint:
            
            
            if height[start] < height[endPoint]:
                max_capacity= max_capacity if max_capacity > (height[start] * (endPoint-start)) else (height[start] * (endPoint-start))
                start=start+1
            else:
                max_capacity= max_capacity if max_capacity > (height[endPoint]* (endPoint-start)) else (height[endPoint]* (endPoint-start))
                endPoint=endPoint-1
            

        return max_capacity
    
