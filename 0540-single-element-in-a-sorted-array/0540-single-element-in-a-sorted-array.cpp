class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int cnt=0;
        int l=0,r=nums.size()-1;
        while(r>l){
            cnt^=(nums[l]^nums[r]);
            r--;
            l++;
        }
        if(r==l) cnt^=nums[l];
        return cnt;
    }
};