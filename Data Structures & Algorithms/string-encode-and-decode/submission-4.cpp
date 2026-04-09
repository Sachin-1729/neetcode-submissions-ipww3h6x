class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++)
        {
            int size = strs[i].size();
            char p = '#';
            string sizeInString = to_string(size);
            res = res +sizeInString + p+ strs[i];
            
        }

        cout<<res;

        return res;

    }

    vector<string> decode(string s) {
        
        vector<string> ans{};
        string temp = "";
        
        for(int i = 0; i < s.size(); i++)
        {  
          
            if(s[i] != '#')
            {
                temp+=s[i];

            }
            else
            {
                 int num = stoi(temp);
                 temp = "";
                 string t = s.substr(i+1 , num);
                 ans.push_back(t);
                 i+=num;
            }
        }
        return ans;
    }
};
