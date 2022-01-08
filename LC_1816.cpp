// class Solution {
// public:
//     string truncateSentence(string s, int k) {
        
        
//           string ans1;
//         int count=0;
//         for(int i=0; i<s.size(); i++){
//             if (s[i] != ' '){
//                 ans1.push_back(s[i]);
//             }
//             else
//             {
//                 count++;
//                 if (count == k){
                    
//                     break;
//                 }
//                 ans1.push_back(' ');
//             }
//         }
//         return ans1;
        
//     }
// };