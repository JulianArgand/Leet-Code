class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return {};
        }
        vector<int> arr(nums.size());
        int index = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                arr[index] = nums[i];
                index++;
            }
        }
        vector<int> ans(index);
        for(int i =0; i<index; i++)
        {
            ans[i] = arr[i];
        }
        return ans;

    }
};