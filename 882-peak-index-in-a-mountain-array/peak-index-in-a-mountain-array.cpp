class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int major = -1;
        for(int i = 0 ;i < arr.size(); i++)
        {
            if(major < arr[i])
            {
                major = arr[i];
            }
        }
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] == major)
            {
                return i;
            }
        }
        return -1;
    }
};