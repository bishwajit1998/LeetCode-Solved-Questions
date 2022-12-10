class Solution {
public:
    double myPow(double x, int n) {
        if(!n || x == 1)
            return 1;
        if(n < 0) {
            if(n == -2147483648)
                return myPow(1 / x, -(n / 2)) * myPow(1 / x, -(n / 2));

            return myPow(1 / x, -n);
        }

        double half = myPow(x, n / 2);
        if(n % 2)
            return half * half * x;
        else
            return half * half;
    }
};