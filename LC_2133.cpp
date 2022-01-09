// class Solution {
// public:
//     bool checkValid(vector<vector<int>>& matrix) {
        
        
        
//         int n=matrix.size();
        
//         int rcsum=(n*(n+1))/2;
//         unordered_set<int> s;
        
//         for(int i=0;i<n;i++){
           
//             s.clear();
            
//              for(int j=0;j<n;j++){
                 
//                  if(s.find(matrix[i][j])!=s.end())
//                      return false;
                 
//                  s.insert(matrix[i][j]);
                 
//              }
//         }
        
        
//         for(int i=0;i<n;i++){
           
//                 int colsum=0;
//               int rowsum=0;    
//             for(int j=0;j<n;j++){
//                 colsum+=matrix[i][j];
//                 rowsum+=matrix[j][i];
                 
//             }
            
            
//             if(colsum!=rcsum||rowsum!=rcsum){
//                 return false;
//             }
//         }
        
//         return true;
        
//     }
// };