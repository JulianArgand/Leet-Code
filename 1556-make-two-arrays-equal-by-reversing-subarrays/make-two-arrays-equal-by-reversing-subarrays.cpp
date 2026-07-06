class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

    

        
        sort(arr.begin(), arr.end());
        sort(target.begin() , target.end());
        
        int count = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(target[i] != arr[i])
            {
                count ++;
            }
        }
        if(count == 0)
        {
            return true;
        }
        return false;
    }
};