// worng hai correct karo 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isequalString(string str1, string str2) {
    int st = 0, end = (str2.length() - 1);
    while(st < end) {
        swap(str2[st], str2[end]);
        if(str2 == str1) {
            return true;
        }
        st++;
    }
    return false;
}

int main() {
    string str1 = "apple";
    string str2 = "appel";
    cout << isequalString(str1, str2) << endl;

    return 0;
}