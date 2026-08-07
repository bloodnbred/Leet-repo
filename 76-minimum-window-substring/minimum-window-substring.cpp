class Solution {
public:
bool fun(vector<int> &have, vector<int> &need){
    for(int i = 0; i < 128 ; i++){
        if(have[i]<need[i])
            return false;
    }
    return true;

}
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int> have(128,0);
        vector<int> need(128,0);
        int i;
        if(n<m)
        return "";
        for(i=0;i<m;i++)
        need[t[i]]++;

        int low=0,high=0;
        int res=INT_MAX;
        int start=-1;
        for(high=0;high<n;high++){
            have[s[high]]++;

            while(fun(have,need))
            {
                 int len=high-low+1;
                if(res>len)
                {
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }
        return (res == INT_MAX)? "" : s.substr(start,res);
    }



        
        
    
};