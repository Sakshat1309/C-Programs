class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int ptr1=0;
      int ptr2=0;
        int k=0;
        for(int i=m;i<m+n;i++){
            swap(nums1[i],nums2[k]);
            k++;
        }
        sort(nums1.begin(),nums1.end());
    }
};