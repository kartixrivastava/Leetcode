class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0,x = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                count--;
            }else if( moves[i] == '_'){
                x++;
            }
             else {
                count++;
            }
        }
        return abs(count) + x;
    }
};