#include <iostream>
using namespace std;

int diagonalSum(int mat[3][3], int n) { // T.C => O(n^2)
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                sum += mat[i][j];
            } else if(j == n-i-1) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    cout << diagonalSum(matrix, 3) << endl; // only n is used due to diagonal matrix

    return 0;
}