class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }

        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];
        vector<int>ans;
        
        for(int i=min;i<=max;i++){
            if(s.count(i)==0)
            ans.push_back(i);
        }
        return ans;
    }
};