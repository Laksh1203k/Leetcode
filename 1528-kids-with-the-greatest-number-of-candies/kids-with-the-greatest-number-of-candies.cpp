class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),0);

        int max=candies[0];
        for(int i:candies){
            if(i>max) max=i;
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max)
            ans[i]=true;
        }
        return ans;
    }
};