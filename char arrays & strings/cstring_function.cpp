#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    strcpy(str,"maddheshiya");
    cout << str << endl;

    char str1[] = "hello";
    char str2[] = "world";
    cout << strcat(str1, str2) << endl;
    cout << str1 << endl; // str1 = str1 + str2
    cout << str2 << endl;

    char str3[] = "abc";
    char str4[] = "xyz";
    cout << strcmp(str3, str4) << endl;
    cout << strcmp(str4, str3) << endl;

    return 0;
}