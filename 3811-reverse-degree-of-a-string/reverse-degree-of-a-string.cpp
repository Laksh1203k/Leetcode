class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int reversed=26-(s[i]-'a');
            int index=i+1;
            sum+=reversed*index;
        }
        return sum;
    }
};