class Solution {
public:
    int thirdMax(vector<int>& nums) {
   
        sort(nums.begin(),nums.end(),greater<int>());
   
    vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }
   if(ans.size()<3){
    return nums[0];
   }
   else 
   return ans[2];
    }
};