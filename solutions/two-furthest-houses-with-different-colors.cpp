// https://leetcode.com/problems/two-furthest-houses-with-different-colors

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i=0,j=n-1;
        while(colors[0]==colors[j]) j--;
        while(colors[n-1]==colors[i]) i++;
        return max(n-i-1,j);
    }
};