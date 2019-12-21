/*
    LeetCode Problem : Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
    Copyright (c) Saikat Sinha Ray
*/

class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int revNum=0,y=x;
        
        if (x<0)
            return false;
        
        while (x!=0)
        {
            revNum=revNum*10 +(x%10);
            x=x/10;
        }
        if (revNum==y)
            return true;
        
        return false;
    }
};
