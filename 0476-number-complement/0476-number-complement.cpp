class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int finalXOR = 0;
        while (temp) {
            temp = temp >> 1;
            finalXOR = finalXOR << 1;
            finalXOR = finalXOR | 1;
        }
        return num ^ finalXOR;
    }
};