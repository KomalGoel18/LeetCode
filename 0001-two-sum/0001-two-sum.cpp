class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int iloc,jloc;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    iloc=i;
                    jloc=j;
                    break;
                }
                else
                    continue;
            }
        }
        return {iloc,jloc};
        
    }
};