class Solution {
public:
    bool isPalindrome(long long int x) {
       long long int m = x;
       long long int r = 0;
       long long int last ;
       while(x>0){
        last = x%10;
        r*=10;
        r+=last;
        x/=10;
       }
       if(m==r) return true;
       return false;
    }
};