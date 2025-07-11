#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int>& vec, int st, int end, int key) {
    if(st > end) {
        return -1;
    }

    int mid = (st + end) / 2;

    if(vec[mid] == key) {
        return mid;
    } else if(vec[mid] < key) {
        return binSearch(vec, mid+1, end, key);
    } else {
        return binSearch(vec, st, mid-1, key);
    }
}

int main() {
    vector<int> vec = {1,2,3,4,5,6,7};
    int n = vec.size()-1;
    cout << binSearch(vec, 0, n, 5) << endl;
    return 0;
}