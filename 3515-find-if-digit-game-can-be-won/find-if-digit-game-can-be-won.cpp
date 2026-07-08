class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i] >=0 && nums[i] <10)
            {
                sum1 += nums[i];
            }
            else if(nums[i] >=10 && nums[i] <100)
            {
                sum2 += nums[i];
            }
        }
        if(sum1 > sum2)
        {
            return true;
        }
        else if(sum1 < sum2)
        {
            return true;
        }
        return false;

    }
};