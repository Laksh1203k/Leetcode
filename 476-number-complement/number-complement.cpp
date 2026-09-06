class Solution {
public:
    int findComplement(int num) {
        long long temp=num;
        long long count=0;
        while(num!=0){
           num= num>>1;
            count++;
        }
        long long i=pow(2,count)-1;

        return i^temp;
    }
};