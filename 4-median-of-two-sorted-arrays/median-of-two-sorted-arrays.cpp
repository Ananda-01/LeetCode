class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       int m=nums2.size();
       int sz=n+m;
       vector<int>merge;
       
       // Merge this two sorted array
       for(int i=0;i<n;i++)
       {
        merge.push_back(nums1[i]);
       }
       for(int i=0;i<m;i++)
       {
        merge.push_back(nums2[i]);
       }

       // sort this array
       sort(merge.begin(),merge.end());

       if(sz%2!=0)
       {
        return double(merge[sz/2]);
       }
       else
       {
        double sum=merge[sz/2]+merge[sz/2-1];
        double ans=sum/2;
        return ans;
       }

    }
};