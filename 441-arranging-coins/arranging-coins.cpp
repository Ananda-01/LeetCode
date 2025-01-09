class Solution {
public:
    int arrangeCoins(int n) {
        long long tmp=n;
        long long ans=(-1+sqrt(1+8*tmp))/2;
        return ans;
    }
};