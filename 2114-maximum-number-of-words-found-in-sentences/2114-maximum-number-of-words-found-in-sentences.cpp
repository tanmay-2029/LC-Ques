class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi=0;
        for (int i=0;i<sentences.size();i++){
            int cnt=0;
            for (int j=0;j<sentences[i].length();j++){
                if (sentences[i][j]==' ') cnt++;
                maxi=max(cnt,maxi);
            }
        }
        return maxi+1;
    }
};