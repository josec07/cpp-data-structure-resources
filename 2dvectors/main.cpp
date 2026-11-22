


#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main (){
    cout << "Main Grid" << endl;
    
    vector<vector<int>> grid(6,vector<int>(6,0));
    int gSize = grid.size();
    for(int i = 0; i < gSize; i++){
        for(int j = 0; j < gSize; j++){
            grid[i][j] = (rand() % 9) + 1;
            cout << grid[i][j];
        }
        cout << endl;
    } 

    cout << "Sub Grid -2 size (N * N)" << endl;
    // int N = grid.size()-2;
    // vector<vector<int>> res(N-2,vector<int>(N-2,0));
    // int rSize = res.size();
    // for(int i = 0; i < rSize; i++){
    //     for(int j = 0; j < rSize; i++){
    //         cout << 
    //     }
    // }

}