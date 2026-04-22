class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
     map<char , int> mp{};

     if(s1.size() > s2.size())
     {
        return false;
     }

     for(auto x : s1)
     {
        mp[x]++;
     }
     int k = s1.size();

        for(int i = 0; i < s2.size(); i++)
        { 
             
        for (int i = 0; i <= s2.size() - k; i++) {
            
            map<char, int> mp1; // reset every window

            // build window
            for (int j = i; j < i + k; j++) {
                mp1[s2[j]]++;
            }

            // compare full maps
            if (mp1 == mp) {
                return true;
            }
        }

        }
        return false;
    }
};
