class Solution {
public:
    double myPow(double x, int n) {
        
        long long binary = n;
        long double ans = 1;
        long double base = x;

        if(binary<0)
        {
            base=1/base;
            binary=-binary;
        }

        while(binary > 0)
        {
            if(binary%2==1)
            {
                ans*=base;
            }
            base*=base;
            binary/=2;
        }
        return ans;
    }
};