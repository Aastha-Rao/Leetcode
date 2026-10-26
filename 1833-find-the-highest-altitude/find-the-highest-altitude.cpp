class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int rest =0;
        int curr =0;
        for(int i =0 ;i<n;i++){
            curr +=gain[i];
            rest = max(rest,curr);
  }
  return rest;
    }
};