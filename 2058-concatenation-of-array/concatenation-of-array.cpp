class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        
        int n = nums.size();
        vector<int> arr(2 * n);
        int j = 0;
        for(int i = 0; i<n; i++)
        {
            arr[j] = nums[i];
            j++;
        }
        for(int i = 0; i<n; i++)
        {
            arr[j] = nums[i];
            j++;
        }

        return arr;



    }
};