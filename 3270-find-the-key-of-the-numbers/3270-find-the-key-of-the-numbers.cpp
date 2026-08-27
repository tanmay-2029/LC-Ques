class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector <int> n1,n2,n3;
        for (int i=0;i<4;i++){
            n1.emplace_back(num1%10);
            num1/=10;
            n2.emplace_back(num2%10);
            num2/=10;
            n3.emplace_back(num3%10);
            num3/=10;
        }
        int cnt=0;
        int dig;
        for (int i=0;i<4;i++){
            dig=min(n1[i],n2[i]);
            dig=min(dig,n3[i]);
            cnt+=pow(10,i)*dig;
        }
        return cnt;
    }
};