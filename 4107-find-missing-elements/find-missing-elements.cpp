class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }

        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];
        vector<int>ans;
        
        for(int i=min;i<=max;i++){
            if(m.find(i)==m.end())
            ans.push_back(i);
        }
        return ans;
    }
};