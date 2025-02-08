#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    for(int i=0; i<5; i++) {
        vec.push_back(i);
    }
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}