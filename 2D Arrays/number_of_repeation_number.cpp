#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1,2,3},
                        {4,7,2},
                        {7,1,2}};
    int countof2 = 0;
    int n = 3, m = 3;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(matrix[i][j] == 2) {
                countof2++;
            }
        }
    }
    cout << "count of 2's is = " << countof2 << endl;

    return 0;
}