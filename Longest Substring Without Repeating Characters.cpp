class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {     
      vector <int> char_idx (128, -1);
      int length=0,maxlen=0,window_start=0;
      
      for (int i=0;i<s.size();)
      {  
        if (char_idx[s[i]]==-1)
        {  
          char_idx[s[i]]=i;
          length++;
          maxlen=max(length,maxlen);
          i++;
          continue;
        }
        fill(char_idx.begin(), char_idx.end(), -1);
        i=window_start+1;
        window_start=i;
        length=0;
      }
      return   max(length,maxlen);  
    }
};
    
