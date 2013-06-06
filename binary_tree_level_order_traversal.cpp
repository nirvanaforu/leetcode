typedef vector<int> vi;
typedef vector<vi> vvi;
typedef queue<TreeNode*> qTN;

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function        
        vvi result;
        vi lev;
        //vi currLev, nextLev;
        qTN currLev, nextLev; 
        if(root == NULL) return result;
        
        currLev.push(root);
        while (!currLev.empty()) {
            TreeNode* tmp = currLev.front();            
            lev.push_back(tmp->val);
            currLev.pop();
            if (tmp->left != NULL) {
               nextLev.push(tmp->left);    
            }
            if (tmp->right != NULL) {
               nextLev.push(tmp->right);    
            }
            
            if (currLev.empty()) {                
                swap(currLev,nextLev);                
                result.push_back(lev);
                lev.clear();
            }            
        }
        
        return result;
    }
};