class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        ans.push_back(nums[0]);
        int c =1;
        for(int i =1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
            }else{
                c=1;
            }
            if(c<=k){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};