/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    char* Serialize(TreeNode *root) { 
        
        ostringstream out;
        
        Serialize(root,out);
        
        string tmp= out.str();
        const char* res_const=tmp.c_str();
         char* res=new char[tmp.length()+1];
        strcpy(res,res_const);
        return res;
        
    }
    TreeNode* Deserialize( char *str) {
        
        istringstream in(str);
        
        return Deserialize(in);
    
    }
    
     private:
    void Serialize(TreeNode *root, ostringstream &out) {
        if (root) {
            out << root->val << ' ';
            Serialize(root->left, out);
            Serialize(root->right, out);
        } else {
            out << "# ";
        }
    }
    TreeNode* Deserialize(istringstream &in) {
        string val;
        in >> val;
        if (val == "#") return nullptr;
        TreeNode *root = new TreeNode(stoi(val));
        root->left = Deserialize(in);
        root->right = Deserialize(in);
        return root;
    }
};