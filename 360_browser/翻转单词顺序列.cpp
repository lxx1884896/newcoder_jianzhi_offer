class Solution {
public://此题重点参考讨论区：马客(Mark)，牛客000001号，offer收割机`
    string ReverseSentence(string str) {
        string res; 
      
         reverse(str.begin(),str.end());
        int front=0;
        int back=0;
        int size = str.size();
        while(front<size){
            while(front<size&&str[front]==' ')++front;
            back=front;
            while(back<size&&str[back]!=' ')++back;
            std::reverse(str.begin()+front, str.begin()+back);
            front=back;
        }
        return str;
        
    }
};