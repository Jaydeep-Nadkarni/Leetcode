class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int x=nums.size();

        for(int r=0;r<x;r++)
        {
            if(nums[r]!=nums[l])
            {
                l++;
                nums[l]=nums[r];
            }
        }

        return l+1;
    }
};