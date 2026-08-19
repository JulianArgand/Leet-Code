class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int total = n1 + n2;

        
        int merge[10000];

        
        for(int i = 0; i < n1; i++) {
            merge[i] = nums1[i];
        }

        
        for(int i = 0; i < n2; i++) {
            merge[n1 + i] = nums2[i];
        }

        
        for(int i = 0; i < total - 1; i++) {
            for(int j = 0; j < total - i - 1; j++) {
                if(merge[j] > merge[j+1]) {
                    int temp = merge[j];
                    merge[j] = merge[j+1];
                    merge[j+1] = temp;
                }
            }
        }

        
        if(total % 2 == 0) 
        {
            int mid1 = total/2 - 1;
            int mid2 = total/2;
            return (merge[mid1] + merge[mid2]) / 2.0;
        } 
        
        else 
        {
            int mid = total/2;
            return merge[mid];
        }
    }
};