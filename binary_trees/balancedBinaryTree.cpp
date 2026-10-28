#include "treenode.h"
#include <iostream>

using namespace std;

int main(){
    TreeNode* root = new TreeNode(3,new TreeNode(9),new TreeNode(20));

    cout << root->val_ << endl;
    

    return 0;

}