class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int dig=k;
        for(int i=0;i<n;i++){
            if (nums[i]==dig) dig+=k;
            if (nums[i]>dig) return dig;
        }
        return dig;
    }
};