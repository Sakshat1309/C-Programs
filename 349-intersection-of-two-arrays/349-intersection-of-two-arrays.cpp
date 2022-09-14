class Solution {
public:
    
    int binarysearch(vector<int> arr , int key){
        int l=0;
        int r=arr.size()-1;
        
        while(l<=r){
             int mid = (l+r)/2;
            if(arr[mid]==key){
                return arr[mid];
            }
            else if(arr[mid]<key){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            if(binarysearch(nums2,nums1[i])!=-1){
                result.insert(binarysearch(nums2,nums1[i]));
            }
        }
        vector<int> ans(result.begin(),result.end());
        return ans;
    }
};