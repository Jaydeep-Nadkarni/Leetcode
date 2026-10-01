class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0,max=0;

        for(int val:nums)
        {
            if(val==1)
            {
                count++;
                if(count>max)
                {
                    max=count;
                }
            }
            else{
                count=0;
            }
        }

        return max;

    }
};