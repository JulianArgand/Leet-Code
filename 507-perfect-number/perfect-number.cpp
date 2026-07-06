class Solution {
public:
    bool checkPerfectNumber(int num) {
       
       int perfect[] = {6, 28, 496, 8128, 33550336};

    for (int x : perfect)
    {
        if (x == num)
            return true;
    }

    return false;
    }
};