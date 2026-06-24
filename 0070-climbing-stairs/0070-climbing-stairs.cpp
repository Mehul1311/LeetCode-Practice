class Solution {
public:
    int climbStairs(int n) {
        // Handle base cases
        if (n <= 2) return n;
        
        // Using long long to prevent integer overflow during calculation
        long long first = 1;
        long long second = 2;
        
        for (int i = 3; i <= n; i++) {
            long long current = first + second;
            first = second;
            second = current;
        }
        
        // Cast back to int if the function return type requires it
        return (int)second;
    }
};