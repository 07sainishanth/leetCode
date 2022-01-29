class Solution {
public:
    int fib(int n) {
        // if (n==0)
        //     return 0;
        // if (n == 1 || n == 2)
        //     return 1;
        // int prev = 1, prev_ = 1;
        // for(int i = 3; i <= n; i++){
        //     int temp = prev_;
        //     prev_ = prev+prev_;
        //     prev = temp;
        // }
        // return prev_;
        if (n < 2)
            return n;
        int memo[n+1];
        memo[0] = 0;
        memo[1] = 1;
        for(int i = 2; i <= n; i++)
            memo[i] = memo[i-1] + memo[i-2];
        return memo[n];
        
    }
};