class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
int l=0;
int r=k-1;
double sum=0;
for(int i=l;i<=r;i++){
sum+=nums[i];
}
double avg=sum/k;
//this gives us the sum of first 4 elements that is -1 + 2 + 3 + 3 = 7
double maxavg=avg;
while(r<nums.size()-1){
sum=sum-nums[l];
l++;
r++;
sum=sum+nums[r];
maxavg=max(maxavg,sum/k);
}
return maxavg;
        
    }
};