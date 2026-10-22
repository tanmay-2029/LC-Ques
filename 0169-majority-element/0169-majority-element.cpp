class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int cur=0;

        for (int i=0;i<n;i++){
            if (cnt==0){
                cnt++;
                cur=nums[i];
            }
            else if (cur==nums[i]) cnt++;
            else cnt--;
        }
        return cur;
    }
};