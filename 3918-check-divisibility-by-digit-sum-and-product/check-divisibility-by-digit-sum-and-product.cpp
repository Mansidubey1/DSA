class Solution {
public:
    bool checkDivisibility(int n) {
       int x = n;
        int sum = 0;
        int mul = 1;

        while (x > 0) {
            sum += x % 10;
            mul *= x % 10;
            x /= 10;
        }

        return n % (sum + mul) == 0;
    }
};