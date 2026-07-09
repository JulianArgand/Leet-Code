class Solution {
public:
    int smallestEqual(vector<int>& nums) {
       // sort(nums.begin(), nums.end());
        int count = 0;
        int i;
        for( i =0; i<nums.size(); i++)
        {
            if(i % 10 == nums[i])
            {
                return i;
            }
        }
        return -1;

    }
};