class Solution {
public:
    bool checkValid(string s , int k)
    { 
        map<int , int> mp{};
        for(int i = 0; i < s.size(); i++)
        {
              mp[s[i]]++;
        }

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(auto x : mp)
        {
            maxi = max(x.second , maxi);
            mini = min(x.second , mini);
        }

        if(s.size() - maxi <= k)
        {
            return true;
        }

        return false;

    }
    int characterReplacement(string s, int k) {
        int result = 0;
        for(int i = 0; i < s.size(); i++)
        {  
            string str = "";
            for(int j = i; j < s.size(); j++)
            {  
                str+=s[j];

                if(checkValid(str , k))
                { 

                  cout<<str.size();
                  if(str.size() > result)
                  {
                    result = str.size();
                  }
                }
            }
        }

        return result;
    }
};
