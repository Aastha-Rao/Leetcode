class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i =0;i<words.size();i++){
            string aastha = words[i];
            int l =0;
            int r = aastha.size()-1;
            bool ispalind = true;
            while(l<r){
                if(aastha[l] != aastha[r]){
                   ispalind = false;
                   break;
                }
                l++;
                r--;

            }

            if(ispalind){
                return aastha;
            }
        }
        return "";
    }
};