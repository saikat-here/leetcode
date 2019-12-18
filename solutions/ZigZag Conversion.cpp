/*
    LeetCode Problem : ZigZag Conversion
    Problem Description : The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows
    Copyright (c) Saikat Sinha Ray
*/

class Solution {
public:
    string convert(string s, int numRows) {

        if ((s.size()<2) || (numRows==1 ))
            return s;
        int i=0,j=0, isdown=1;
        string ans[numRows],finalStr;
        
        int index=0;
        
        cout <<1 << endl;
        while (i<s.size())
        {
            ans[index]=ans[index]+s.at(i++);
           
            if (index == (numRows-1))
                isdown=0;
            
            if (index==0)
                isdown=1;
            
            if (isdown)
                index++;
            else
                index--;
            
        }
        
        for (i=0;i<numRows;i++)
        {
            finalStr+=ans[i];
        }
        
        return finalStr;
    }
};
