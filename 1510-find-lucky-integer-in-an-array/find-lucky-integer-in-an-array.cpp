class Solution {
public:
    int findLucky(vector<int>& arr) {
    int ans = -1;
    unordered_map<int, int>mp;
    for(int i =0;i<arr.size();i++){
        mp[arr[i]]++;
       
    }
    
    for(int i =0;i<arr.size();i++)   {
        if(arr[i]==mp[arr[i]]){
             ans = max(ans,arr[i]);
        }
      
    } 
     
    return ans;
    }
};