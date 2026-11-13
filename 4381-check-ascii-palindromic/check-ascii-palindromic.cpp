class Solution {
public:
    bool isPalindromic(string s) {
       string binary ="";
       for(char c :s){
        binary += bitset<8>(c).to_string();
       }
        int left = 0;
        int right = binary.length() - 1;

        while (left < right) {
            if (binary[left] != binary[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;

    }
};