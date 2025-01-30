//staircase search 
#include <iostream>
using namespace std;

bool staircaseSearch(int mat[][4], int n, int m, int key) {
    int i = n-1, j = 0;

    while(i >= 0 && j < m) {
        if(mat[i][j] == key) {
            cout << "found your cell at (" << i << "," << j << ")" << endl;
            return true;
        }
        else if(mat[i][j] < key) {
            j++;
        }
        else {
            i--;
        }
    }
    cout << "key is not found" << endl;
    return false;
}

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    staircaseSearch(matrix, 4, 4, 33);
    return 0;
}