// Link: https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(const vector<int>& nums,const int target) {
        vector <int> ans(2,0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
            }
        }
        return ans;
    }
};