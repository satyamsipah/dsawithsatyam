#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1,2,3},
                        {4,7,2},
                        {7,1,2}};
    int rowsum = 0;
    int m = 3;

    for(int i=0; i<m; i++) {
        rowsum += matrix[1][i];
    }

    cout << "2nd row sum is = " << rowsum << endl;

    return 0;
}