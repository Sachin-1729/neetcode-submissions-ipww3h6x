class Solution {
public:
   int getMax(int i, int k, vector<int>& nums)
    {
        int maxi = nums[i];
        for (int j = i; j < i + k; j++)
        {
            maxi = max(maxi, nums[j]);
        }
        return maxi;
    }
   
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans{};

     for(int i = 0; i <= nums.size() - k; i++)
     {
         cout<<getMax(i , k, nums);
         ans.push_back(getMax(i , k, nums));
     }

     return ans;
        
    }
};
