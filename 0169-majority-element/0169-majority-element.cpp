class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> umf;
        unordered_map <int,int> umi;
        int maxi=0;
        int id=-1;
        for (int i=0;i<n;i++){
            umf[nums[i]]++;
            if (maxi<umf[nums[i]]){
                maxi=umf[nums[i]];
                id=nums[i];
            }
        }
        return id;
    }
};