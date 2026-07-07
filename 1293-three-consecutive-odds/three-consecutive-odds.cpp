class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int count = 0;
        for( int i =2 ; i<nums.size() ;i ++)
        {
            if((nums[i] % 2 !=0 ) && (nums[i-1] % 2 !=0 ) && (nums[i-2] % 2 !=0 ))
            {
                count++;
            }
        }

        if(count != 0)
        {
            return true;
        }
        return false;
    }
};