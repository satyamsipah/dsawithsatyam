#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> vec, int i) {
    int n = vec.size();
    if(i == n-1) {
        return true;
    }

    if(vec[i] > vec[i+1]) {
        return false;
    }

    return isSorted(vec, i+1);
}

int main() {
    vector<int> vec = {1,3,2,4};
    vector<int> vec1 = {1,2,3,4};

    cout << isSorted(vec, 0) << endl;
    cout << isSorted(vec1, 0) << endl;

    return 0;
}