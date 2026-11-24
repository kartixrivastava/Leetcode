class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> uglyNums(n);
        uglyNums[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; i++) {
            uglyNums[i] =
                min(uglyNums[p2] * 2, min(uglyNums[p3] * 3, uglyNums[p5] * 5));
            if (uglyNums[i] == uglyNums[p2] * 2)
                p2++;
            if (uglyNums[i] == uglyNums[p3] * 3)
                p3++;
            if (uglyNums[i] == uglyNums[p5] * 5)
                p5++;
        }
        return uglyNums[n - 1];
    }
};