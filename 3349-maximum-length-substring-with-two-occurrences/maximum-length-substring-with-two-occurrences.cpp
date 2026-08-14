class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> m;
        int i=0;
        int count=0;
        for(int j=0;j<s.size();j++){
            m[s[j]]++;
            while(m[s[j]]>2){
                m[s[i]]--;
                i++;
            }
            count=max(count,j-i+1);
        }
        return count;
    }
};