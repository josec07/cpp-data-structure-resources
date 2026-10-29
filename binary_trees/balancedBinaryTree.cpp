#include <iostream>
#include "treenode.h"

using namespace std;;

int main (){
    TreeNode * bt = build("[1,2,3,null,null,4]");

    cout << bt->val_ << endl;

    return 0;
}