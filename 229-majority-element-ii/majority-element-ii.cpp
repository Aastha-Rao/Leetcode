class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a = nums.size()/3;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x :nums){
            mp[x]++;
        }
       for(auto it:mp){
        if(it.second>a){
            ans.push_back(it.first);
        }
       }
       return ans;
    }
};