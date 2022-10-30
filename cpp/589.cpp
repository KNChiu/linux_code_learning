class Solution {
public:
    vector<int> preorder(Node* root) {
        if (root==nullptr) return {};
        vector<int> nodes;
        helper(root, nodes);
        return nodes;
    }

    void helper(Node* root, vector<int>& nodes){
        if (root){
            nodes.push_back(root->val);
            for (Node* child:root->children){
                helper(child, nodes);
            }
        }
    }
};
