class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ss=0;
        int ds=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>9) ds+=nums[i];
            else ss+= nums[i]; 
        }
        if (ss!=ds) return true;
        else return false;
    }
};