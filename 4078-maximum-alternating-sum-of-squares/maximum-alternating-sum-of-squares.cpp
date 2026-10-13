class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum=0;
        vector<long long> temp;
        
        for(int i:nums){
            temp.push_back(i*i);
        }
        sort(temp.begin(),temp.end());
        int n=temp.size()/2;

        for(int i=0;i<n;i++){
            sum-=temp[i];
        }

        for(int i=n;i<temp.size();i++){
            sum+=temp[i];
        }
        return sum;
    }
};