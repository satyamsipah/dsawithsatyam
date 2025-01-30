#include <iostream>
using namespace std;

void transPose(int mat[][3], int n, int m) {
    int transPose[m][n] = {{0}};
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            transPose[j][i] = mat[i][j];
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << transPose[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int matrix[3][3] = {{1,2,3},
                        {4,7,2},
                        {7,1,2}};
    transPose(matrix, 3, 3);
    return 0;
}