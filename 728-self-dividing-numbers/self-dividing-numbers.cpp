class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        while(left <= right) {
            int i = left;
            bool self = true;

            while(i != 0) {
                int d = i % 10;

                if(d == 0 || left % d != 0) {
                    self = false;
                    break;
                }

                i = i / 10;
            }

            if(self) {
                ans.push_back(left);
            }

            left++;
        }

        return ans;
    }
};