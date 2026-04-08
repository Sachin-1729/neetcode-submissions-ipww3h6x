class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> mp{};
        vector<vector<string>> result{};

        for(int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin() , temp.end());
            mp[temp].push_back(strs[i]);
        }

        for(auto x : mp)
        {
            cout<<x.first<<endl;
            vector<string> tempp{};
            for(auto m : x.second)
            {
                tempp.push_back(m);
            }
            cout<<endl;
            result.push_back(tempp);
        }

        return result;
    }
};
