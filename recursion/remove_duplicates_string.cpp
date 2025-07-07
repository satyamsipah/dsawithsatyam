#include <iostream>
#include <string>
using namespace std;

void removeDup(string str, string ans, int i, int map[26]) {
    if(i == str.size()) {
        cout << ans;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx] == 1) {
        removeDup(str, ans, i+1, map);
    } else {
        map[mapIdx] = 1;
        removeDup(str, ans+str[i], i+1, map);
    }
}

int main() {
    string str = "adaadbc";
    string ans = "";
    int map[26] = {0};
    removeDup(str, ans, 0, map);

    return 0;
}