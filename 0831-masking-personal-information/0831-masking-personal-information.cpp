class Solution {
public:
    string maskPII(string s) {
        bool e=false;
        string fina="";
        int id;
        for (int i=s.length()-1;i>-1;i--){
            if (s[i]=='@'){
                id=i;
                e=true;
                break;
            }
        }
        if (e){
            string cen="*****";
            fina+=tolower(s[0]);
            fina+=cen;
            for (int i=id-1;i<s.length();i++){
                fina+=tolower(s[i]);
            }
        }
        else{
            string sen="***-***-";
            stack <char> st;
            stack <int> num;
            int numc=0;
            int cnt=0;
            for(int i=s.length()-1;i>-1;i--){
                if(isdigit(s[i])){
                    num.push(s[i]-'0');
                    numc++;
                }
                if(isdigit(s[i]) && cnt<4){
                    cnt++;
                    st.push(s[i]);
                }
            }
            if (numc==10){
                fina=sen;
                while(!st.empty()){
                    fina+=st.top();
                    st.pop();
                }
            }
            else if (numc==11){
                fina="+*-";
                fina+=sen;
                while(!st.empty()){
                    fina+=st.top();
                    st.pop();
                }
            }
            else if (numc==12){
                fina="+**-";
                fina+=sen;
                while(!st.empty()){
                    fina+=st.top();
                    st.pop();
                }
            }
            else if (numc==13){
                fina="+***-";
                fina+=sen;
                while(!st.empty()){
                    fina+=st.top();
                    st.pop();
                }
            }
        }
        return fina;
    }
};