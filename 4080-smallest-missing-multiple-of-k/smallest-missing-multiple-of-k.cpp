class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>m(nums.begin(),nums.end());

        int ans=k;

        while(m.count(ans)){
            ans+=k;
        }
        return ans;
    }
};