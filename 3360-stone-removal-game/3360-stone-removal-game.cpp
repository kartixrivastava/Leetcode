class Solution {
public:
    bool canAliceWin(int n) {
        bool alice = false;
        int x = 10;
        while (n >= x) {
            n -= x;
            x--;
            alice = !alice;
        }
        return alice;
    }
};