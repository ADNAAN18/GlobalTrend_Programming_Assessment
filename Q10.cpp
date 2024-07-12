#include <iostream>
#include <string>

using namespace std;

bool checkAlphabetic(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    if (count == str.size()) {
        return true;
    }
    return false;
}

int main() {
    string str1 = "HelloWorld";
    string str2 = "Hello123";
    string str3 = "abcdef";

    cout << str1 << " is "<< checkAlphabetic(str1)<<endl;
    cout << str2 << " is "<< checkAlphabetic(str2)<<endl;
    cout << str3 << " is "<< checkAlphabetic(str3)<<endl;
    return 0;
}
