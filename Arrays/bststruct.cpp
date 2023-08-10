#include<iostream>

class TreeNode
{
public:
    int key;
    TreeNode *left,*right;

    TreeNode(int item){
        key=item;
        left=right=nullptr;
    }
};
class bst
{
private:
    TreeNode* root;
public:
    bst(){
        root=nullptr;
    }

    TreeNode* insert(TreeNode* node, int key){
        if(node==nullptr){
            return new TreeNode(key);
        }   
        if(key< node->key){
            node->left=insert(node->left,key);
        }else if (key>node->key)
        {
            node->right=insert(node->right,key);        
    }
        return node;
    } 
    TreeNode* search(TreeNode* node, int key){
        if(node==nullptr|| node->key==key){
           return node;
        }
        if(key<node->key){
            return search(node->left,key);
        }
        return search(node->right,key);
    }

    void insert(int key){
        root=insert(root,key);
    }
    TreeNode* search(int key){
        return search(root,key);
    }

    

};


int main() {
    bst bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    int key = 6;
    if (bst.search(key) == nullptr)
        std::cout << key << " not found" << std::endl;
    else
        std::cout << key << " found" << std::endl;

return 0;
}


