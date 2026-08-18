class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==n) return *max_element(nums.begin(),nums.end());

        int count[51]={0};

        for(int i:nums){
            count[i]++;
        }
    if(k==1){
        for(int i=50;i>=0;--i){
            if(count[i]==1)
            return i;
        }
    }
    int ans=-1;

    if(count[nums[0]]==1)
    ans=max(ans,nums[0]);

    if(count[nums[n-1]]==1)
    ans=max(ans,nums[n-1]);

    return ans;
    }
};