class Solution {
public:
     string longestPalindrome(string s)
     {
        if (s.size()<2)
            return s;
         
        int i,len=1;
        string longPld;
         
        for (i=0;i<s.size();i++)
        {
            int strt=i-1,end=i+1;     
            
            while ( strt>=0 && end <s.size() &&  s[strt]==s[end])
            {
                strt--;
                end++;
            }
           
            longPld = longPld.size() < (s.substr(++strt,--end-strt+1)).size()?  (s.substr(strt,end-strt+1)) : longPld;

            strt=i;end=i+1;  
            
            while ( strt>=0 && end <s.size() && s[strt]==s[end] )
            {
                
                strt--;
                end++;
            }
           
            longPld = longPld.size() < (s.substr(++strt,--end-strt+1)).size() ?  (s.substr(strt,end-strt+1)) : longPld;
         
        }
         
         return longPld;               
     }
    

};
