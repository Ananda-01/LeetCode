class Solution {
public:
    bool isPerfectSquare(int num) {
        long int l=1;
        long int h=num;
        long int mid,ans;
        while(l<=h)
        {
            mid=(l+h)/2;
            ans=mid*mid;
            if(ans==num)
            {
                return true;
            }
            else if(ans<num)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }

        return false;
    }
};