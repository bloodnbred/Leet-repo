class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        int res = nums[0];
        int i;
        for(i = 1 ; i < nums.size() ; i++){
            int v1=nums[i];
            int v2=min*nums[i];
            int v3=max*nums[i];
            min=fmin(v1,fmin(v2,v3));
            max=fmax(v1,fmax(v2,v3));
            res = fmax(res,max);
        }
        return res;
        
    }
};