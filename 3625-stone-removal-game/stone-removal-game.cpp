class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        int turn = 0;

        while (n >= remove && remove > 0) {
            n -= remove;
            remove--;
            turn++;
        }

        return turn % 2 == 1;
    }
};