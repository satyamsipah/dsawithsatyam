#include <iostream>
#include <string>
using namespace std;

void substringPrint(string str, int st, int end, int n) {
    if(st == n) {
        return;
    }
    if(end == n) {
        substringPrint(str, st+1, st+1, n);
        return;
    }

    cout << str.substr(st, end-st+1) << endl;
    substringPrint(str, st, end+1, n);
}

int main() {
    string str = "aba";
    int n = str.size();
    substringPrint(str, 0, 0, n);

    return 0;
}