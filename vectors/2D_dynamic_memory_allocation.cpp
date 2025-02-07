#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row = 4, col = 3;
    int* *matrix = new int *[row];
    for(int i=0; i<row; i++) {
        matrix[i] = new int[col];
    }
    //data store
    int x = 1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}