class Solution {
public:
    string convertToBase7(int num) {

     string ans = "";
     bool neg = false;

     if(num == 0)
     {
        return "0";
     }

    if(num < 0)
    {
        neg = true;
        num = -num;
    }

     while(num > 0)
     {
        int rem = num % 7;
        num /= 7;
       
        ans += char(rem + '0');
        
     }  
 reverse(ans.begin(), ans.end());
     if(neg)
     {
        ans = '-' + ans;
     } 
     return ans;
    }
};