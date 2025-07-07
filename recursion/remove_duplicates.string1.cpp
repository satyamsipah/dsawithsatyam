#include <iostream>
#include <string>
using namespace std;

void removeDup(string str, string ans, int map[26]) {
    int n = str.size();
    if(n == 0) {
        cout << ans;
        return;
    }

    char ch = str[n-1];
    int mapIdx = (int)(str[n-1] - 'a');
    str = str.substr(0, n-1);
    if(map[mapIdx]) {
        removeDup(str, ans, map);
    } else {
        map[mapIdx] = 1;
        removeDup(str, ch+ans, map);
    }
}

int main() {
    string str = "abb";
    string ans = "";
    int map [26] = {0};
    removeDup(str, ans, map);

    return 0;
}