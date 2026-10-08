class Solution {
public:
    void sortColors(vector<int>& nums) {
      int key[3]={0};

      for(int x:nums){
        key[x]++;
      }
      
      for(int i=0;i<key[0];i++){
        nums[i]=0;
      }

      for(int i=key[0];i<key[0] + key[1];i++){
        nums[i]=1;
      }

       for(int i=key[0] + key[1];i<key[0] + key[1] + key[2];i++){
        nums[i]=2;
      }
    }
};