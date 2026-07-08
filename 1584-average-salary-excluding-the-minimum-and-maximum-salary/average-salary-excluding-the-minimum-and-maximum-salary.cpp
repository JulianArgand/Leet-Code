class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0.0;
        int count = 0;
        sort(salary.begin(),salary.end());

        if(salary.size() == 3)
        {
            return salary[1];
        }       
        for(int i = 1; i<salary.size()-1; i++ )
        {
            sum += salary[i];
            count ++;
        }
        
        return sum/count;
    }
};