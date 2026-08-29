class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        for(char i:stones){
            m[i-'a']++;
        }
        int count=0;

        for(char i:jewels){
            if(m.find(i)==m.end())
            count+=m[i-'a'];
        }
        return count;
    }
};