class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mapp;
        for (int i = 0; i < deck.size(); i++) {
            mapp[deck[i]]++;
        }
        int g = 0;
        for (auto& x : mapp) {
            g = gcd(g, x.second);
        }
        return g > 1;
    }
};