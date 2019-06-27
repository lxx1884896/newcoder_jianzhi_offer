class Solution {
public:
    string ReverseSentence(string str) {
        if(str.empty()) return "";
        reverse(str.begin(),str.end());
        int front =0,back=0;
        int len=str.size();
        while(front<len){
            while(front<len && str[front]==' '){
             front++;   
            }
            back=front;
            while(back<len && str[back]!=' '){
             back++;   
            }
            reverse(str.begin()+front,str.begin()+back);
            front=back;
            
            
        }
        return str;
    }
};