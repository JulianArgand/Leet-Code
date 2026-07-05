class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        
        int first = 0;
        int last = n-1;

        while (first < last)
        {
            int temp = nums[last];
            nums[last] = nums[first];
            nums[first] = temp;
            first ++;
            last --;
        }

        first = k;
        last = n-1;
         while (first < last)
        {
            int temp = nums[last];
            nums[last] = nums[first];
            nums[first] = temp;
            first ++;
            last --;
        }

        first = 0;
        last = k-1;
        while (first < last)
        {
            int temp = nums[last];
            nums[last] = nums[first];
            nums[first] = temp;
            first ++;
            last --;
        }

        
    }
};