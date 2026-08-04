class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        int min=nums[0];
        int max=nums[0];

        for(int i=0;i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
        }

        vector<int>ans;
        
        for(int i=min;i<=max;i++){
            if(m.find(i)==m.end())
            ans.push_back(i);
        }
        return ans;
    }
};