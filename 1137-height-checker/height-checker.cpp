class Solution {
public:
    int heightChecker(vector<int>& heights) {
         int n = heights.size();
         vector<int> arr(heights);
         sort(arr.begin(), arr.end());
         int count = 0;
         for(int i =0 ;i<n; i++)
         {
            if(heights[i] != arr[i])
            {
                count ++;
            }
         }
         return count;
    }
};