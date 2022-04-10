#include <iostream>
#include <vector>
using namespace std;

int reductionCost(vector<int> num){
sort(num.begin(),num.end());
reverse(num.begin(),num.end());
vector<int> sum;

int cost;

for(int i=num.size()-1;i>0;i--){
    cost=0;
    cost+=num[i]+num[i-1];
    num.pop_back();
    num.pop_back();
    num.push_back(cost);
    sum.push_back(cost);
 sort(num.begin(),num.end());
 reverse(num.begin(),num.end());
}
int ans=0;
for(int i=0;i<sum.size();i++){
    ans+=sum[i];
}
return ans;
}


// #include <iostream>
// #include <vector>
//     using namespace std;
    
//     int cardPackets(vector<int> cardPackets){
//         vector<int> v1;
//         vector<int> v2;
//         vector<int> v3;
//         vector<int> v4;
//         vector<int> sum;
//         int sum1=0, sum2=0, sum3=0, sum4=0;
//         for (int i=0; i<cardPackets.size(); i++){
//             if(cardPackets[i]%2==0){
//                 v1.push_back(0);
//             }
//             else{
//                 v1.push_back(1);
//             }
//              sum1+= v1[i];
//         }

//         for (int i=0; i<cardPackets.size(); i++){
//             if(cardPackets[i]%3==0){
//                 v2.push_back(0);
//             }
//             else{
//                 v2.push_back(3-(cardPackets[i])%3);
//             }
//             sum2+= v2[i];
//         }

//         for (int i=0; i<cardPackets.size(); i++){
//             if(cardPackets[i]%5==0){
//                 v3.push_back(0);
//             }
//             else{
//                 v3.push_back(5-(cardPackets[i])%5);
//             }
//             sum3+= v3[i];
//         }

//         for (int i=0; i<cardPackets.size(); i++){
//             if(cardPackets[i]%7==0){
//                 v4.push_back(0);
//             }
//             else{
//                 v4.push_back(7-(cardPackets[i])%7);
//             }
//             sum4+= v4[i];
//         }

//           sum.push_back(sum1);
//           sum.push_back(sum2);
//           sum.push_back(sum3);
//           sum.push_back(sum4);

//        sort(sum.begin(), sum.end());

//         return sum[0];


//     }