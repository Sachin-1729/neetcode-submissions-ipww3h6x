class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        map<int , int> mp{};
        for(auto x : nums)
        {
            mp[x]++;
        }

        vector<int> startofSequence{};

        int temp = 1;
        int maxi = 1;

        for(auto x : nums)
        {
            if(mp[x-1] == 0)
            {
                startofSequence.push_back(x);
            }
        }

        for(auto x : startofSequence)
        {  
             int current = x;
            while(mp[current+1] != 0)
            {    
                 current++;
                 temp++;
            }
          
                maxi = max(maxi , temp);
                temp = 1;

            
        }

        return max(maxi , temp);
    }
};
