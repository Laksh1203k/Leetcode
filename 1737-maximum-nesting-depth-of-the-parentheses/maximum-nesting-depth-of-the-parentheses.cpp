class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;

        int count=0;
        int maxcount=0;

        for(char ch:s){
            if(ch=='('){
            st.push(ch);
            count++;
            maxcount=max(count,maxcount);
            }
            if(ch==')'){
            st.pop();
            count--;
            }
        }
        return maxcount;
    }
};