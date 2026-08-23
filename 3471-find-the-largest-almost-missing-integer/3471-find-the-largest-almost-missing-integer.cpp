class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=-1;
        int l=0,f=0;

        if (k==n){
            sort(nums.begin(),nums.end(),greater<int>());
            return nums[0];
        }

        if(n==1) return nums[0];

        if (k==1){
            sort(nums.begin(),nums.end(),greater<int>());
            int p=0;
            int id=0;
            if (nums[0]!=nums[1]) return nums[0];
            while (p+1<n && (nums[p]==nums[p+1] || nums[id]==nums[p])){
                id=p;
                p++;
            }
            maxi=nums[p];
            if (p>=n-1 && nums[p]==nums[id]) return -1;
        }
        else {
            if (nums[0]==nums[n-1]) return -1;
            for (int i=1;i<n-1;i++){
                if (nums[0]==nums[i]) f++;
                if (nums[n-1]==nums[i]) l++;
            }
            if (f>0 && l==0) return nums[n-1];
            else if (l>0 && f==0) return nums[0];
            else if (l==0 && f==0) return max(nums[0],nums[n-1]);
            else return -1;
        }

        return maxi;
    }
};