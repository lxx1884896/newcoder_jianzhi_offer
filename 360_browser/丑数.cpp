

class Solution {
public:
    static bool cmp(int a,int b){
        
        string p="";
        string q="";
        p+=to_string(a);
        p+=to_string(b);
        q+=to_string(b);
        q+=to_string(a);
        
        return p<q;
    }
    string PrintMinNumber(vector<int> numbers) {
        string res;
        if(numbers.size()==0)  return res;
        sort(numbers.begin(),numbers.end(),cmp);
        
        for(int i=0;i<numbers.size();i++){
            res+=to_string(numbers[i]);
        }
        
        return res;
        
    }
};