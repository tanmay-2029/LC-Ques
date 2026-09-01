class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int carr=(a&b)<<1;
            a=a^b;
            b=carr;
        }
        return a;
    }
};