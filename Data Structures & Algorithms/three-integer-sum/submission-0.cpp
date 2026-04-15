class Solution {
public:
  vector<vector<int>> twoSum(int target, vector<int> &nums, int start)
{
    int left = start + 1;  
    int right = nums.size() - 1;
      vector<vector<int>> res;

    while(left < right)
    {
        int sum = nums[left] + nums[right];

        if(sum == target)
        {
           res.push_back({nums[start], nums[left], nums[right]});

            // skip duplicates
            while(left < right && nums[left] == nums[left + 1]) left++;
            while(left < right && nums[right] == nums[right - 1]) right--;

            left++;
            right--;
        }
        else if(sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return res; 
}
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result{};
        
        sort(nums.begin() , nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            
            if (i > 0 && nums[i] == nums[i - 1]) continue;
          vector<vector<int>> temp = twoSum(-nums[i], nums, i);

          for(auto x : temp)
          {
            result.push_back(x);
          }
        }

        return result;
    }
};
