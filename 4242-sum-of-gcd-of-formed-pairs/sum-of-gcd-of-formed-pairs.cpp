class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maximum = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++)
        {
            if(nums[i] > maximum)
            {
                maximum = nums[i];
                
            }
             nums[i] = gcd(maximum,nums[i]);

        }

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = n - 1;
       long long sum = 0;

    while(left < right)
    {
        sum += gcd(nums[left], nums[right]); 
        left++;
        right--;
    }
    return sum;
    }
};