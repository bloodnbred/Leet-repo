class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> mp = {
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };

        vector<string> res;
        res.push_back("");

        for (char digit : digits) {
            vector<string> temp;

            for (string s : res) {
                for (char ch : mp[digit]) {
                    temp.push_back(s + ch);
                }
            }

            res = temp;
        }

        return res;
    }
};