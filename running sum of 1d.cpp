class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningsum(nums.size());
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<=i;j++){
                runningsum[i]+=nums[j];
            }
        }
        return(runningsum);
    }
};
