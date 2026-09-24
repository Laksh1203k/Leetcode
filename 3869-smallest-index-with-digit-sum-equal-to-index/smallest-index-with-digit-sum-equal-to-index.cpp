class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            while(x>0){
                int a=x%10;
                temp+=a;
                x/=10;
            }
    if(temp==i) ans=min(ans,i);
    temp=0;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};