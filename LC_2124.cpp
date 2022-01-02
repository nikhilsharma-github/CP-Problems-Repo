class Solution {
public:
    bool checkString(string s) {
        bool ans=true;
        int check=0;
        for(char x:s){
            
           if(x=='b'){
               check=-1;
               continue;
           } 
           else if(x=='a'&&check==-1){
               ans=false;
               break;
           }
        }
        
        return ans;
    }
};