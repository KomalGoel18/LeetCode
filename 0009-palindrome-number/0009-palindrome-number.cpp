class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long x_copy=x,rem=0,num=0;
        while(x_copy!=0)
        {
            rem=x_copy%10;
            num=num*10+rem;
            x_copy/=10;
        }
        return(x==num);

    }
};