class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0;
        int sum2 = 0;

       
        for (int j = n; j >= 1; j--)
        {
            sum2 += j;
        }

        for (int i = 1; i <= n; i++) 
        {
            sum1 += i;
            sum2 -= (i - 1);   

            if (sum1 == sum2)
            {
                return i;
            }
        }

        return -1;
    }
};