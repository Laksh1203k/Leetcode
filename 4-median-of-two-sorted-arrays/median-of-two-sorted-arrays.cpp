class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        int m=i+j+1;
        vector<int> ans(m+1);
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                ans[m]=nums1[i];
                i--;
                m--;
            }
            else {
                ans[m]=nums2[j];
                j--;
                m--;
            }
        }
        while(i>=0){
            ans[m]=nums1[i];
            i--;
            m--;
        }
           while(j>=0){
            ans[m]=nums2[j];
            j--;
            m--;
        }
        int n=ans.size();
        if(n%2==0) return (float)(ans[n/2-1] + ans[n/2])/2;
        else return ans[n/2];
    }
};