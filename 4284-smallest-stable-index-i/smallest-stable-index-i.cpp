class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>suffix(n);
        suffix[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--){
            suffix[i]=min(suffix[i+1],nums[i]);
        }

        int premax=nums[0];

        for(int i=0;i<n;i++){
            premax=max(premax,nums[i]);

            int j=premax-suffix[i];

            if(j<=k)
            return i;
        }
        return -1;
    }
};