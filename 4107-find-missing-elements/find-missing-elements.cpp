class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int first = nums[0];
        int last = nums[nums.size()-1];
        int  j = 0;
        int k = 0;
        vector<int> ans;
        for(int i = first; i<last; i++)
        {
            if(i != nums[j])
            {
                ans.push_back(i) ;
            }
            else
            {
            j++;
            }
        }
        return ans;
    }
};