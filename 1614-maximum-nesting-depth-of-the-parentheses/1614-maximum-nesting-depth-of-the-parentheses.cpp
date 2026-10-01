class Solution {
public:
    int maxDepth(string s) {
        int cur=0;
        int maxi=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='(') cur++;
            if (s[i]==')') cur--;
            maxi=max(maxi,cur);
        }
        return maxi;
    }
};