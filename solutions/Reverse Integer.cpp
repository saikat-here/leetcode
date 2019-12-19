/*
    LeetCode Problem : Given a 32-bit signed integer, reverse digits of an integer.
    Copyright (c) Saikat Sinha Ray
*/
class Solution {
public:
    int reverse(int x) 
    {
        int lastNum;
        long long int newNum=0;

          while (x !=0 )
          {
              newNum= (newNum*10)+(x%10);
              if( newNum > 2147483647 || newNum < -2147483648)
                return 0;
              x=(int)x/10;
         }
        return newNum;
    }
};
