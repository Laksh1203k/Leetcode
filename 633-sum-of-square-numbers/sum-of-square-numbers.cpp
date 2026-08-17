class Solution {
public:
    bool judgeSquareSum(int c) {
       // if(c==1) return true;
        //if(c==2) return true;
        int x=sqrt(c);
        
        int i=0;
        int j=x;
        while(i<=j){
            long long sum=(long long)(i*i)+(j*j);
            if(sum==c) return true;
            if(sum<c) i++;
            if(sum>c) j--;
        }
        return false;
    }
};