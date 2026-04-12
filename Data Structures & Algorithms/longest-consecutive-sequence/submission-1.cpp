class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
           if(nums.size() == 0)
           {
            return 0;
           }
        int ans = 1;
        int temp = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1] + 1)
            {
                ans++;

            }
            else if (nums[i] == nums[i - 1]) {
                continue; // skip duplicates
            }
            else
            {  
                temp = max(temp , ans);
                ans = 1;

            }
        }

         return max(temp, ans);
    }
};
