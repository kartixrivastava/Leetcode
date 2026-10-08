class Solution {
public:
    int maxContainers(int n, int w, int maxW) {
        int containers = n * n;
        int result = 0;
        while (containers > 0) {
            if (maxW < w) {
                return result;
            }
            maxW -= w;
            result++;
            containers--;
        }
        return result;
    }
};