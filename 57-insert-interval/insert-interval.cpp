class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newInterval) {
        vector<vector<int>>preres;
        bool insert = false;
        int start = 1;
        for(int i=0;i<a.size();i++){
        if(insert==false && start>=newInterval[0]){
            preres.push_back(newInterval);
            insert = true;
        }
        preres.push_back(a[i]);
        }
        if(insert==false)
            preres.push_back(newInterval);
        sort(preres.begin(), preres.end());
        vector<vector<int>>res;
        int start1 = preres[0][0];
        int end1 = preres[0][1];
        for(int i = 0;i<preres.size();i++){
            int start2 = preres[i][0];
            int end2 = preres[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            } 
             res.push_back({start1,end1});
        start1=start2;
        end1=end2;

        }
         res.push_back({start1,end1});
        
       
        return res;
        
    }
};