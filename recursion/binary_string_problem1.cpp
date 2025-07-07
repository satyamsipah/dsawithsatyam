#include <iostream>
#include <string>
using namespace std;

void binString(int n, string ans) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }
    int len = ans.size()-1;
    if(ans[len] != '1') {
        binString(n-1, ans+'0');
        binString(n-1, ans+'1');
    } else {
        binString(n-1, ans+'0');
    }
}

int main() {
    string ans = "";
    binString(3, ans);
    
    return 0;
}