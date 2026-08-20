class Solution {
public:
   int subarraySum(vector<int>& a, int k) {
    unordered_map<int, int> freq;

    int sum = 0;
    int res = 0;

    freq[0] = 1;   // important

    for(int i = 0; i < a.size(); i++) {

        sum += a[i];

        int ques = sum - k;

        int cnt = freq[ques];

        res += cnt;

        freq[sum]++;
    }

    return res;
}
};