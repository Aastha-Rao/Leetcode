class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int maxp = INT_MIN;
      int minp = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int a = nums[i];
            for(int j =i+1;j<nums.size();j++){
int b = a*nums[j];
if(b>maxp){
    maxp = b;
}
if(b<minp){
    minp =b;
}
            }
        }
        return maxp - minp;

    }
};