class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long int bigMass = mass;
        sort(asteroids.begin(),asteroids.end());
        for (int i = 0; i < asteroids.size(); i++) {
            if (bigMass < asteroids[i]) {
                return false;
            }
            bigMass += asteroids[i];
        }
        return true;
    }
};