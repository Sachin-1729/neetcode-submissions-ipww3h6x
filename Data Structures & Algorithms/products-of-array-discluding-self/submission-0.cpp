class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           
           vector<int> ans(nums.size() , 0);
           vector<int> prefix(nums.size(), 1);
           vector<int> suffix(nums.size(), 1);

           int temp = 1;
           for(int i = 1; i < nums.size(); i++)
           {
             temp =  nums[i - 1] * temp;
             prefix[i] = temp;            
           }

           temp = 1;

           for(int i = nums.size()-2; i >= 0; i--)
           {
            temp =  nums[i + 1] * temp;
            suffix[i] = temp;            
           }
           for(int i = 0; i < nums.size(); i++)
           {          
              ans[i] = prefix[i]*suffix[i];
           }

           return ans;
    }
};
