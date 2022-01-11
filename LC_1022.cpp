// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// //     int finalval=0;
// //     string strval="";
    
// //     int btd(int v){
// //         int ans=0;
// //         int p=0;
        
// //         while(v){
            
// //             int d=v%10;
            
// //             ans=ans+pow(2,p)*d;
            
// //             v=v/10;
// //             p++;
// //         }
        
// //         return ans;
        
// //     }
    
// //     void srtl(TreeNode *root){
// //         if(root==NULL)
// //             return;
// //         if((root->left==NULL&&root->right==NULL)){
            
// //             strval=strval+(root->val?"1":"0");
// //             int val=stoi(strval);
// //             int btdv=btd(val);
// //             // cout<<"Binary vals : "<<val<<endl;
// //             // cout<<"dec vals: "<<btdv<<endl;
// //             finalval=finalval+btdv;
// //             strval=strval.substr(0,strval.size()-1);
// //             return;
// //         }
        
// //         int k=root->val;
// //         strval=strval+(k?"1":"0");
// //         srtl(root->left);
// //         srtl(root->right);
// //         strval=strval.substr(0,strval.size()-1);
        
        
// //     }
// //     int s1(TreeNode *root,int val){
// //         if(root==NULL)
// //             return 0;
        
// //         val=(val*2)+root->val;
        
// //         if(root->left!=NULL&&root->right!=NULL)
// //             return val;
        
// //         return s1(root->left,val)+s1(root->right,val);
// //     }
    
// //     int sumRootToLeaf(TreeNode* root) {
         
// //         // srtl(root);
// //         // return finalval;
// //         return s1(root,0);
// //     }
    
//      int sumRootToLeaf(TreeNode* root, int sum){
//         if(!root) return 0;
//         sum = (2 * sum) + root->val;
//         if(!root->left && !root->right) return sum;
//         return sumRootToLeaf(root->left, sum) + sumRootToLeaf(root->right, sum);
//     }
// public:
//     int sumRootToLeaf(TreeNode* root) {
//         return sumRootToLeaf(root, 0);
//     }
// };