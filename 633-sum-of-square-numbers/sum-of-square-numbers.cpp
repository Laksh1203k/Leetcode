class Solution {
public:
    bool judgeSquareSum(int c) {
       // if(c==1) return true;
        //if(c==2) return true;
        int x=sqrt(c);
        
        int i=0;
        int j=x;
        while(i<=j){
            if((long long)(i*i)+(j*j)==c) return true;
            if((long long)(i*i)+(j*j)<c) i++;
            if((long long)(i*i)+(j*j)>c) j--;
        }
        return false;
    }
};