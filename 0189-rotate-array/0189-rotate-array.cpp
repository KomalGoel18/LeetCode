class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> rotateAry(n);
        for(int i=0;i<n;i++)
        {
            rotateAry[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<rotateAry[i];
        }
        nums=rotateAry;
        
    }
};