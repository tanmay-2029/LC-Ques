class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        for (int i=0;i<s.length();i++){
            if ((int)s[i]>64 && (int)s[i]<91) k+=tolower(s[i]);
            if ((int)s[i]>96 && (int)s[i]<123) k+=s[i];
            if ((int)s[i]>47 && (int)s[i]<58) k+=s[i];
        }
        int l=0,r=k.length()-1;
        while(r>=l){
            if (k[l]!=k[r]) return false;
            r--;
            l++;
        }
        return true;
    }
};