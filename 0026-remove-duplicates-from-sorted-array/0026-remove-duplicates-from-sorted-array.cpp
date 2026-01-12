class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        vector<int> A;
        A.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            else
            {
                count++;
                A.push_back(nums[i]);
            }
        }
        for(int i=0;i<A.size();i++)
            nums[i]=A[i];
        return count;
        
    }
};