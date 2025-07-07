#include <iostream>
#include <string>
using namespace std;

void binaryString(int n, int lastPlace, string ans) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1) {
        binaryString(n-1, 0, ans + '0');
        binaryString(n-1, 1, ans + '1');
    } else {
        binaryString(n-1, 0, ans + '0');
    }
}

int main() {
    string ans = "";
    binaryString(0, 0, ans); //outout is empty string
    binaryString(1, 0, ans); 
    binaryString(2, 0, ans);
    binaryString(3, 0, ans);
    return 0;
}