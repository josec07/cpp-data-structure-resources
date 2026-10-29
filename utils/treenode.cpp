
#include <sstream>
#include <vector>
#include "treenode.h"


TreeNode * build(string data) {
    TreeNode * res = NULL;

    if (!data.empty() && data.front() == '[') data.erase(0, 1);
    if (!data.empty() && data.back() == ']') data.pop_back();

    stringstream temp(data);
    string seg;
    vector < TreeNode * > a;
    while (getline(temp, seg, ',')) {
        if (seg != "null") {
            a.push_back(new TreeNode(stoi(seg)));
        } else {
            a.push_back(NULL);
        }
    }
    int len = a.size();
    if (len > 0) {
        int preNull = 0;
        for (int i = 0; i < len; i++) {
            TreeNode * cur = a[i];
            if (cur) {
                int leftChilIndex = 2 * i + 1 - preNull * 2;
                if (leftChilIndex >= len) {
                    break;
                }
                cur -> left = a[leftChilIndex];
                int rightChildIndex = 2 * i + 2 - preNull * 2;
                if (rightChildIndex >= len) {
                    break;
                }
                cur -> right = a[rightChildIndex];
            } else {
                preNull++;
            }
        }
        res = a[0];
    }
    return res;
}