#include <iostream>
#include <vector>
using namespace std;

int firstOccurr(const vector<int> &vec, int target, int i) {
    if(i == vec.size()) return -1;

    if(vec[i] == target) return i;

    return firstOccurr(vec, target, i+1);

}

int main() {
    vector<int> vec = {1,2,4,5,2};
    cout << firstOccurr(vec, 4, 0) << endl; //2
    cout << firstOccurr(vec, 10, 0) << endl; //-1

    return 0;
}