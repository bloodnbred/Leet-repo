class Solution {
public:
    vector<string> ans;
    
    void solve(string &digits, int idx, string curr,
               unordered_map<char, string> &mp) {
        
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string letters = mp[digits[idx]];

        for (char ch : letters) {
            solve(digits, idx + 1, curr + ch, mp);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        solve(digits, 0, "", mp);
        return ans;
    }
};