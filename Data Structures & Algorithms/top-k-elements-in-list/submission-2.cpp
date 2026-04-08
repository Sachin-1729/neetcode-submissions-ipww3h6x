class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> mp{};
        vector<pair<int , int>> temp{};
        vector<int> result(nums.size() , -1);
        vector<int> ans{};
         vector<int> ans1{};
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto x : mp)
        {
            pair<int,int> p{};
            p.first = x.second;
            p.second = x.first;
            temp.push_back(p);
        }

        sort(temp.rbegin() , temp.rend());

        for(auto x : temp)
        {  
            if(k > 0)
            {
            ans.push_back(x.second);
            cout<<x.second;
            k--;

            }
           
        }

       

     

      


        return ans;
    }
};
