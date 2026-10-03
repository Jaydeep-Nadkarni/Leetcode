class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector <int> neg;
        int n=nums.size();

        for(int val:nums)
        {
            if(val<0)
            {
                neg.push_back(val);
            }
            else{
                pos.push_back(val);
            }
        }

        for(int i=0;i<n/2;i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }

        return nums;
    }
};