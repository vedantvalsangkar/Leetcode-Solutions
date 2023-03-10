// https://leetcode.com/problems/broken-calculator

class Solution {
public:
    // TC - O(log(Y/X))
    int brokenCalc(int X, int Y) {
        int res = 0;
        while (Y > X) {
            Y = Y % 2 > 0 ? Y + 1 : Y / 2;
            res++;
        }
        return res + X - Y;
    }
};