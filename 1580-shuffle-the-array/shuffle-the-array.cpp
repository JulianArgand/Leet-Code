class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x[n];
        int y[n];

        for(int i = 0 ;i<n; i++)
        {
            x[i] = nums[i];
        }
        for(int i = 0 ; i<n; i++)
        {
            y[i] = nums[i+n]; 
        }
        for(int i = 0 ; i<n; i++)
        {
            
            for (int i = 0; i < n; i++)
{
    nums[2 * i] = x[i];
    nums[2 * i + 1] = y[i];
}
        }
        

        return nums;

    }
};