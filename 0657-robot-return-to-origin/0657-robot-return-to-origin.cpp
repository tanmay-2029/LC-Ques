class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.length();
        int u=0,d=0,l=0,r=0;
        for (int i=0;i<n;i++){
            if (moves[i]=='L') l+=1;
            else if (moves[i]=='D') d+=1;
            else if (moves[i]=='U') u+=1;
            else r+=1;
        }
        if (u==d && l==r) return true;
        else return false;
    }
};