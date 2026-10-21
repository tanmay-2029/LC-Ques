class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> um;
        vector <int> out;
        for (int i=0;i<n;i++){
            um[nums[i]]++;
            if (um[nums[i]]>1) out.emplace_back(nums[i]);
        }
        for (int i=0;i<n;i++){
            if(um[i+1]==0){
                out.emplace_back(i+1);
                break;
            }
        }
        return out;
    }
};