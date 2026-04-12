class Solution {
public:
    bool isPalindrome(string s) {
        string temp;

        // Step 1: Clean string
        for (int i = 0; i < s.size(); i++) {
            if (isalnum((unsigned char)s[i])) {
                temp += (char)tolower((unsigned char)s[i]);
            }
        }

        // Step 2: Two pointer check
        int first = 0;
        int last = (int)temp.size() - 1;

        while (first < last) {
            if (temp[first] != temp[last]) {
                return false;
            }
            first++;
            last--;
        }

        return true;
    }
};