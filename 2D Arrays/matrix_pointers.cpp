#include <iostream>
using namespace std;

void func(int mat[][4], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
        cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

void func1(int (*mat)[4], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
        cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int mat[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    cout << mat << " = " << &mat[0][0] << endl;
    cout << mat+1 << " != " << &mat[0][1] << endl;
    cout << mat+1 << " = " << &mat[1][0] << endl;
    cout << mat+1 << " != " << &mat[1][3] << endl;
    cout << *(mat) << endl;
    cout << *(mat+1) << endl;
    cout << *(mat+2) << endl;
    cout << *(*(mat+2)+2) << endl;
    func(mat, 4, 4);
    func1(mat, 4, 4);

    return 0;
}