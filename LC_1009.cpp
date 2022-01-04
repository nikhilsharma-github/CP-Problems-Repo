// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int ans=0;
        
//         if(n==0)
//             return 1;
        
//         vector<int> bits;
//         int temp=n;
//         while(temp){
//             int d=temp%2;
//             bits.push_back(d);
//             temp=temp/2;
//         }
        
//         // reverse(bits.begin(),bits.end());
        
//         // cout<<"Bit array is : "<<endl;
//         // for(int k:bits){
//             // cout<<k;
//         // }
//         // cout<<endl;
//         // cout<<"Complement Bit array is : "<<endl;
//         for(int i=0;i<bits.size();i++){
//             if(bits[i]==0){
//                 bits[i]=1;
//             }
//             else if(bits[i]==1)
//                 bits[i]=0;
            
//             // cout<<bits[i];
            
//         }
//         // cout<<endl;
//         // reverse(bits.begin(),bits.end());
        
//         for(int i=0;i<bits.size();i++){
//             ans+= pow(2,i)*bits[i];
//         }
//         // cout<<ans<<endl;
        
        
//                 return ans;
//     }
// };