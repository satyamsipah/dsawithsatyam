#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // for toupper, tolower
using namespace std;

int main() {
    // Basic String Initialization
    string s = "satyam";
    string str(3, 'a'); // "aaa"
    cout << "String str(3, 'a') = " << str << endl;

    string str1(5, '1'); // "11111"
    cout << "String str1(5, '1') = " << str1 << endl;

    // String Properties and Access
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Front character: " << s.front() << endl;
    cout << "Back character: " << s.back() << endl;
    cout << "s[0]: " << s[0] << ", s[1]: " << s[1] << endl;
    cout << "s.at(0): " << s.at(0) << ", s.at(1): " << s.at(1) << endl;
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Push and Pop
    s.push_back('a');
    cout << "After push_back('a'), size: " << s.size() << ", s = " << s << endl;
    s.pop_back();
    cout << "After pop_back(), size: " << s.size() << ", s = " << s << endl;

    // Erase characters from string
    s.erase(2, 3); // Removes 3 characters from index 2
    cout << "After s.erase(2,3): ";
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << ",";
    }
    cout << endl;

    // Erase with return value
    string s1 = "satyam";
    cout << "s1 before erase: " << s1 << endl;
    cout << "s1.erase(3,3): " << s1.erase(3, 3) << endl; // "sat"

    // Further manipulations
    cout << "s before: " << s << endl;
    cout << "s.erase(2,2): " << s.erase(2,2) << endl; // Remove 2 chars from index 2
    cout << "After insert(2, \"tyam\"): " << s.insert(2, "tyam") << endl;
    cout << "After replace(2, 3, \"a\"): " << s.replace(2, 3, "a") << endl;

    // Substring and Search
    s = "satyam";
    cout << "\nString s = " << s << endl;
    cout << "First occurrence of 'a': " << s.find("a") << endl;
    cout << "First occurrence of 'at': " << s.find("at") << endl;
    cout << "Find 'z': " << s.find("z") << endl; // returns large number (npos)
    cout << "Last occurrence of 'a': " << s.rfind("a") << endl;
    cout << "Substring s.substr(2,4): " << s.substr(2,4) << endl;

    // String to Integer and Vice Versa
    string s2 = "1001";
    string s3 = "apple";
    int num = 101;
    int m = stoi(s2);
    cout << "\nString to int (stoi): " << m << endl;
    string str3 = to_string(num);
    cout << "Int to string (to_string): " << str3 << endl;

    // Reverse and Sort
    reverse(s2.begin(), s2.end());
    cout << "Reversed s2: " << s2 << endl;
    sort(s3.begin(), s3.end());
    cout << "Sorted s3: " << s3 << endl;

    // More examples
    s2 = "23145";
    s3 = "aeroplane";
    reverse(s2.begin(), s2.end());
    cout << "Reversed s2 = " << s2 << endl;
    sort(s3.begin(), s3.end());
    cout << "Sorted s3 = " << s3 << endl;

    // Convert to uppercase using loop
    s3 = "KinG";
    for (int i = 0; i < s3.length(); i++) {
        s3[i] = toupper(s3[i]);
    }
    cout << "Uppercase (manual loop): " << s3 << endl;

    // Convert using transform
    string s4 = "Satyam";
    string s5 = "Satyam";
    transform(s4.begin(), s4.end(), s4.begin(), ::toupper);
    cout << "Uppercase (transform): " << s4 << endl;
    transform(s5.begin(), s5.end(), s5.begin(), ::tolower);
    cout << "Lowercase (transform): " << s5 << endl;

    // Remove all occurrences of a character
    string s6 = "satyam";
    s6.erase(remove(s6.begin(), s6.end(), 'a'), s6.end());
    cout << "After removing 'a' from s6: " << s6 << endl;

    // Remove duplicates
    string s7 = "satyam";
    sort(s7.begin(), s7.end());
    s7.erase(unique(s7.begin(), s7.end()), s7.end());
    cout << "After removing duplicates from sorted s7: " << s7 << endl;

    return 0;
}
