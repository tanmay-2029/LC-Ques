class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();

        if (m*n!=r*c) return mat;

        vector <int> v;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                v.emplace_back(mat[i][j]);
            }
        }

        vector <vector <int>> re(r,vector<int>(c,0));

        int l=0;
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                re[i][j] = v[l];
                l++;
            }
        }
        return re;
    }
};