#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> matrix = {{2, 7}, {3, 4}, {2, 4}};

  cout << matrix.size() << " matrix.size() size of the vector of vectors"
       << endl;
  cout << matrix[0].size() << " matrix[0].size() size of vector at 0" << endl;

  vector<vector<int>> res;
  // search rows first
  for (auto rV : matrix) {
    vector<int> current;
    for (auto r : rV) {
      current.push_back(r);
    }
    for (auto c : current) {
      cout << c;
    }
    cout << endl;
  }



  /////sizes
  int row = matrix.size();

  int col = matrix[0].size(); // # of vectors is # of rows



  //I want push values into my non empty array
  //colvec last element is either the lates min,

// 234,
//127,
// 101,
// the outcome will be rows 012, at values at col at 211, 
  int prevMin = 0; //
  for (int c = 0; c < col; ++c) {
    for (int r = 0; r < row; ++r) {
        if(colVec.empty()){
            colVec.push_back(matrix[r][c]);
        }
        //min(int prevMin 2,int matrix[r][c]), get min (1,2)
        //1 get Min (1,1) (prev, current)

      colVec.push_back(min((!colVec.empty()) ? colVec[colVec.size() - 1]
                                           : colVec.push_back(matrix[r][c]),
                           matrix[r][c]));
    }
    cout << endl;
  }

  for (int r = 0; r < row; ++r) {
    for (int c = 0; c < col; ++c) {
      cout << matrix[r][c];
    }
    cout << endl;
  }
}