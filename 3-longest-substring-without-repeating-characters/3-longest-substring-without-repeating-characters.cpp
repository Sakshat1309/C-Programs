#include <map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        for(int i=0;i<s.length();i++){
            int Localcount = 1;
            map<char,int> m;
            m.insert(make_pair(s[i],1));
            for(int j=i+1;j<s.length();j++){
                if(!m.count(s[j])){
                    m.insert(make_pair(s[j],1));
                    Localcount++;
                }
                else{
                    break;
                }
            }
            cout<<Localcount<<endl;
                if(Localcount>count){
                        count=Localcount;
                    }
        }
        return count;
    }
};