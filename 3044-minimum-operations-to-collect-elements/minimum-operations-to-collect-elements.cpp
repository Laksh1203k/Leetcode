class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    unordered_map<int,int>m;
    for(int i=1;i<=k;i++){
        m[i]++;
        }

        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
            ans++;
           if(m.find(nums[i])!=m.end()){
             m[nums[i]]--;

             if(m[nums[i]]==0){
             m.erase(nums[i]);
             }
           }
            if(m.empty())
            break;
        }
        return ans;
    }
};