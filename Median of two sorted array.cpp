class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        double temp;
        if(n%2 == 0){
            int m = n/2;
            temp = ans[m-1]+ans[m];
            temp = temp/2;
        }
        if(n%2 != 0){
            int k = n/2;
            temp = ans[k];
        }
        return temp;
    }
};
