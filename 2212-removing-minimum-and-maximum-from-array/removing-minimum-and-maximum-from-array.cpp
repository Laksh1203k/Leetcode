class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();

        int maxidx=0;
        int minidx=0;

        for(int i=0;i<n;i++){
            if(nums[i]<nums[minidx])
            minidx=i;

            if(nums[i]>nums[maxidx])
            maxidx=i;
        }
        int i=min(minidx,maxidx);
        int j=max(minidx,maxidx);

        int front=j+1;
        int back=n-i;
        int both=i+1+n-j;

        return min({front,back,both});

    }
};