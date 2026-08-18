class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel=arr[0];
        int onedel=INT_MIN;
        int res=arr[0];
        

        for(int i=1;i<arr.size();i++){
            int prevnodel=nodel;
            int prevonedel=onedel;
            
            nodel=fmax(arr[i],nodel+arr[i]);
            int v2;
            if(prevonedel==INT_MIN){
                 v2=arr[i];
            }
            else{
                v2=prevonedel+arr[i];
            }
            onedel=fmax(v2,prevnodel);

            res=fmax(res,fmax(onedel,nodel));
        }
        return res;
        
        
    }
};