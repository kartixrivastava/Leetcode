class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int time = INT_MAX;
        for (int i = 0; i < tasks.size(); i++) {
            time = min(time, tasks[i][0] + tasks[i][1]);
        }
        return time;
    }
};