class Solution {
public:
    bool checkContains(string p , string t)
    {
       map<char , int> mp1{};
       map<char , int> mp2{};

       for(auto x : p)
       {
        mp1[x]++;
       }

       for(auto x : t)
       {
        mp2[x]++;
       }

       for(auto x : t)
       {
          if(mp2[x] > mp1[x])
          {
            return false;
          }
       }
       return true;
    }
    string minWindow(string s, string t) {
        string ans = "";
        int mini = INT_MAX;
        for(int i = 0; i < s.size(); i++)
        { 
          string p = "";
          for(int j =  i; j < s.size(); j++)
          {
              p+=s[j];
              if(checkContains(p , t))
              {
                 if(p.size() < mini)
                 {
                   mini = p.size();
                   ans = p;
                 }
              }
          }
        }

        return ans;
    }
};
