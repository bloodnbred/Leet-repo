class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        for(int i = 0; i < k ; i++){
            sum = sum + nums[i];
        }

    int low = 0 ;
    int high = k-1;
    long long result = sum;

    while(high<nums.size()){
        result = max(sum,result);

        high++;
        low++;
        sum = sum - nums[low-1];
        if(high==nums.size())
            break;
        sum=sum + nums[high];
    }
    return (double)result/k;
        

    }
};