// class Solution {
// public:
//     int findComplement(int num) {
//         vector<int> b;
//         int ans=0;
//         long long t=num,p=1;
        
//         while(num){
//          b.push_back(num%2);
//             num/=2;
//         }
//         int n=b.size();
//         reverse(b.begin(),b.end());
//         for(int i=0;i<n;i++){
//            b[i]=!b[i];          
//         }
         
//       t=1;
//               for(int i=b.size()-1; i>=0; --i) {
//            ans+= b[i]*t;
//             t *= 2;
//         }
        
//         return ans;
        
            
       
//     }
// };