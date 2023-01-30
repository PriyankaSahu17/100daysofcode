class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>x;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        for(i=0;i<pos.size();i++)
        {
            x.push_back(pos[i]);
            x.push_back(neg[i]);
        }
        return x;
    }
};
