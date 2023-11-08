/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        	if(!root){return 0;}
		queue<TreeNode*>q;
		q.push(root);
		int cnt=0;
		while(!q.empty()){
			int l=q.size();
			cnt+=l;
			for(int i=0; i<l; i++){
				root=q.front();
				q.pop();
				if(root->left){q.push(root->left);}
				if(root->right){q.push(root->right);}
			}
		}
		return cnt;
	
    }
};