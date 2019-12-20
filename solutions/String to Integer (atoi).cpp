/*
    LeetCode Problem :Implement atoi which converts a string to an integer.
    Copyright (c) Saikat Sinha Ray
*/
class Solution {
public:
    int myAtoi(string str) 
    {
        string intval;
    
      if (str.size()==0)
          return 0;
        
        for (int i=0;i<str.size();i++)
        {
      
            if (((int)str.at(i) >57) || ((int)str.at(i) <48))
             {
                 if  (((str.at(i)=='+') || (str.at(i)=='-')) && (intval.size()==0))
                 {
                     intval+=str.at(i);
                 }
                else if (str.at(i)!=' ')
                {
                    break;
                } 
                else if ((str.at(i)==' ') && (intval.size()!=0) )
                    break;
             }
             else if (( (int)str.at(i) <= 57) && ((int)str.at(i)  >= 48) )
             {
                intval+=str.at(i);
             }
            
            if (intval.size()>9)
            {
                if ( stoll(intval)>INT_MAX)
                    return INT_MAX ;
         
                if (  stoll(intval)<INT_MIN )
                    return INT_MIN  ;
            }
        }
        
        if ((intval.size()==0) || (intval=="+") || (intval== "-"))
            return 0;
        
         return stoll(intval) ;
 
    }
};
