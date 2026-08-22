class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;

        for(int i = n; i > 0; i /= 10)
        {
            const int rem = i % 10;
            sum += rem;
            pro *= rem;
        }

        return n % (sum + pro) == 0;
    }
};