class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector <int> v(n);
        for (int i=0;i<n;i++) v[i]=nums[i];
        int maxid=0;
        sort(v.begin(),v.end());
        for (int i=0;i<n-1;i++) {
            if (nums[i]>nums[i+1]) {maxid=i+1; break;}
            else if (nums[i]==nums[i+1]) continue;
        }    
        for (int i=0;i<n;i++){
            if(nums[maxid]!=v[i]) return false;
            maxid++;
            if(maxid==n) maxid=0;
        }
        return true;
    }
};