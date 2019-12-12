/*
    LeetCode Problem : Longest Substring Without Repeating Characters
    Algorithm : Sliding Window Technique (Dynamic)
    Copyright (c) Saikat Sinha Ray
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {     
      // Initializing  a vector and assigning -1 to all position of the vector. 
      //The vector should be able to accommodate any character from ASCII table. That's why the size is 128 (size of ASCI table).
       
      vector <int> char_idx (128, -1);
      int length=0,maxlen=0,window_start=0;
      
      for (int i=0;i<s.size();)
      {  
        // If the char is new then we need to add that to window and increase the window size.
        if (char_idx[s[i]]==-1)
        {  
          char_idx[s[i]]=i;
          length++;
          maxlen=max(length,maxlen);
          i++;
          continue;
        }
        // If the char is already exists on window then reset the window starting position by 1 and rest the length.
        fill(char_idx.begin(), char_idx.end(), -1);
        i=window_start+1;
        window_start=i;
        length=0;
      }
      return   max(length,maxlen);  
    }
};
    
