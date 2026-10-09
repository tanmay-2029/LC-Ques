class Solution {
public:
    string convertDateToBinary(string date) {
        int n = date.length();
        vector <string> s(3);
        vector <long long> in(3), bi(3);
        int m=0;
        for (int i=0;i<n;i++){
            if (i==4 || i==7) {m++; continue;}
            else s[m]+=date[i];
        }
        for (int i=0;i<3;i++) in[i]=stoi(s[i]);
        for (int i=0;i<3;i++){
            int l=0;
            while(in[i]){
                bi[i]+= pow(10,l)*(in[i]%2);
                l++;
                in[i]/=2;
            }
        }
        string fina=to_string(bi[0])+"-"+to_string(bi[1])+"-"+to_string(bi[2]);
        return fina;
    }
};