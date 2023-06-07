#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

string result_string(string str);
int check_non_vowel(string str);
int check_vowel(char ch);

int main() {
    string some_ch, result_ch;

    cout << "Please enter somewords" << endl;
    getline(cin, some_ch);

    result_ch = result_string(some_ch);

    cout << "The characters without vowels: " << result_ch << endl;

    return 0;
}

string result_string(string str) {
    int k = check_non_vowel(str);
    string array = "";
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (check_vowel(str[i]) == 0) {
            array += str.substr(j, i - j + 1);
            j = i + 1;
        }
    }
    return array;
}

int check_vowel(char ch) {
    int flag = 0;
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            flag = 1;
            break;
        default:
            flag = 0;
            break;
    }
    return flag;
}

int check_non_vowel(string str) {
    int count = 0;
    int x = str.length();
    for (int i = 0; i < x; i++) {
        switch (str[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                count++;
                break;
        }
    }
    cout << count << endl;
    return count;
}