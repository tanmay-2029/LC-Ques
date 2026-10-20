class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        if (sum>num*9) return s;
        while(sum){
            if(sum>9) {
                s+=to_string(9);
                sum-=9;
                num--;
            }   
            else{
                s+=to_string(sum);
                sum=0;
                num--;
            }
        }
        while(num) {s+=to_string(0); num--;}
        return s;
    }
};