class Solution {
public:
    int minPartitions(string n) {
        char maxi='0';
        for (int i=0;i<n.length();i++){
            maxi=max(maxi,n[i]);
            if (maxi=='9') break;
        }
        return maxi-'0';
    }
};