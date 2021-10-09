
------------------------PERFECR SQAURE NUMBER-------------------------------------------------------------

Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.

 

Example 1:

Input: num = 16
Output: true
Example 2:

Input: num = 14
Output: false
 

Constraints:

1 <= num <= 2^31 - 1


-----------------------CODE--------------------------------------------------------------------------------------

class Solution {
    public boolean isPerfectSquare(int num) {
        
        int i = 1;
        
        int sum = 0;
        
        while (sum < num) 
        {
            sum += i;
            if(sum<0)
            {
                return false;
            }
            i += 2;
        }
        return sum==num;

    }
}

---------------OUTPUT----------------------------------------------------------------------------------------------

Accepted
Runtime: 0 ms
Your input
16
Output
true
Expected
true