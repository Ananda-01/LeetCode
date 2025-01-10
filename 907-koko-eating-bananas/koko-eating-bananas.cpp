class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int result=high;

        while(low<=high)
        {
            int mid=(low+high)/2;
            long long totalhours=0;

            for(int bananas:piles)
            {
                // (bananas + mid - 1) / mid is a mathematical trick for ceiling division without using floating-point numbers
                totalhours=totalhours + (bananas+mid-1)/mid;
            }

            if(totalhours<=h)
            {
                result=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        return result;
    }
};