class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int a=n;
        while(a>0){
            int x=a%10;
            sum+=x;
            product*=x;
            a=a/10;
        }
        return n%(sum+product)==0;
    }
};