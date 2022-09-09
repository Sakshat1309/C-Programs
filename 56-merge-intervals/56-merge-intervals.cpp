class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
           sort(intervals.begin(), intervals.end());
    int n=intervals.size();
    vector<vector<int>>res;
    for(int i=1;i<n;i++){
        if(intervals[i][0]>intervals[i-1][1]){
            res.push_back(intervals[i-1]); 
        }
        else{
              intervals[i][0]=intervals[i-1][0];
              if(intervals[i][1]<intervals[i-1][1]){
                 intervals[i][1]=intervals[i-1][1];
                 }
             }      
        }       
    res.push_back(intervals[n-1]);
    
    return res;
    }
};