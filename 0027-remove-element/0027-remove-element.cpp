class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector <int> v;
        int cnt=0;
        for (int i=0;i<n;i++){
            if (nums[i]!=val) {v.emplace_back(nums[i]); cnt++;}
        }
        for (int i=0;i<v.size();i++) nums[i]=v[i];
        return cnt;
    }
};