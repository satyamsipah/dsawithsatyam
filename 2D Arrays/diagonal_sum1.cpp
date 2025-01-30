#include <iostream>
using namespace std;

int diagonalSum(int mat[3][3], int n) { // T.C => O(n)
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += mat[i][i];
    if(i != n-i-1) {
        sum += mat[i][n-i-1];
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