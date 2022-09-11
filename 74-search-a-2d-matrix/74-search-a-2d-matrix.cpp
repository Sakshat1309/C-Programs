class Solution {
public:
    bool binsearch(vector<int>& arr,int target){
        int l=0;
        int r=arr.size()-1;
           while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == target)
            return true;
 
        // If x greater, ignore left half
        if (arr[m] < target)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target ) {
        if(matrix.size()==1){
             if(binsearch(matrix[0],target)){
                return true;
                 }
                 else{
                     return false;
                 }
        }
        for(int i=1;i<matrix.size();i++){
            if(matrix[i-1][0]<= target && matrix[i][0]>target){
                 if(binsearch(matrix[i-1],target)){
                return true;
                 }
                 else{
                     return false;
                 }
            }
            if(binsearch(matrix[matrix.size()-1],target)){
                return true;
            }
        }
        return false;
        
    }
};