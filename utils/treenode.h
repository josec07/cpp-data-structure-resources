
#ifndef TREENODE_H


#define TREENODE_H

#include <string>
using namespace std;

struct TreeNode {
    int val_;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val_(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val_(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val_(x), left(left), right(right) {}
};

TreeNode* build(string data);


#endif