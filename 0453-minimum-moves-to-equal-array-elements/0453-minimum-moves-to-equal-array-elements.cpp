class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minElement = INT_MAX;
        for (int x : nums) {
            minElement = min(minElement, x);
        }
        int moves = 0;
        for (int x : nums) {
            moves += (x - minElement);
        }
        return moves;
    }
};