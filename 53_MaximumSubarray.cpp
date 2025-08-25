class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum=0;
        int maxi=INT_MIN;
        int x;
        
        for(int i=0;i<arr.size();i++){
           sum=sum+arr[i];
           maxi=max(maxi,sum);
           if(sum<0)
           sum=0;
        }
        return maxi;
        
    }
};