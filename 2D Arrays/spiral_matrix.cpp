#include <iostream>
using namespace std;

void spiralMatrix(int mat[4][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n-1, ecol = m-1;

    while(srow <= erow && scol <= ecol) {
    //top boundries
    for(int j=scol; j<=ecol; j++) {
        cout << mat[srow][j] << " ";
    }

    //right boundries
    for(int i=srow+1; i<=erow; i++) {
        cout << mat[i][ecol] << " ";
    }

    //bottom boundries
    for(int j=ecol-1; j>=scol; j--) {
        if(srow == erow) { // middle matrix
            break;
        }
        cout << mat[erow][j] << " ";
    }

    //left boundries
    for(int i=erow-1; i>=srow+1; i--) {
        if(scol == ecol) { // middle matrix
            break;
        }
        cout << mat[i][scol] << " ";
    }
    srow++; scol++;
    erow--; ecol--;
    }
    cout << endl;
}

int main() {
    int mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    spiralMatrix(mat, 4, 4);

    return 0;
}