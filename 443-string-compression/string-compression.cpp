class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;

        for(int i = 0; i < chars.size();) {
            char ch = chars[i];
            int count = 0;

            for(int j = i; j < chars.size() && chars[j] == ch; j++) {
                count++;
            }

            chars[index++] = ch;

            if(count > 1) {
                string s = to_string(count);

                for(char c : s) {
                    chars[index++] = c;
                }
            }

            i += count;
        }

        return index;
    }
};