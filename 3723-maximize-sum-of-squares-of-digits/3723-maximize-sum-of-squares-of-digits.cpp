class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9) return "";

        int nines=sum/9;
        char rem=(sum%9)+'0';
        string s(nines,'9');
        if(sum%9>0) s+=(sum%9) + '0';
        s.append(num-s.length(),'0');
        return s;
    }
};