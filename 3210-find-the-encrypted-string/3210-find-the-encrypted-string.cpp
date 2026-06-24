#include<algorithm>
class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        k %= n;                            
        reverse(s.begin(), s.begin() + k); 
        reverse(s.begin() + k, s.end());   
        reverse(s.begin(), s.end());      
        return s;
    }
};