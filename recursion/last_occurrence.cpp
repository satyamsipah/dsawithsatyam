#include <iostream>
#include <vector>
using namespace std;

int lastOccurr(const vector<int> &vec, int target, int i, int last) {
    if(i == vec.size()) return last;

    if(vec[i] == target) last = i;

    return lastOccurr(vec, target, i+1, last);
}

int main() {
    vector<int> vec = {1,2,4,5,2};
    cout << lastOccurr(vec, 2, 0, -1) << endl;
    cout << lastOccurr(vec, 6, 0, -1) << endl;

    return 0;
}