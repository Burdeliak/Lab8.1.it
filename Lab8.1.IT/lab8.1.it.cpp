#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int Count(char* str) {
    int count = 0;
    size_t len = strlen(str);

    
    for (size_t i = 0; i <= len - 3; i++) {
        if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c') {
            count++;
        }
    }
    return count;
}

char* Change(char* str) {
    size_t len = strlen(str);
    if (len < 3)
        return str;

    
    char* tmp = new char[len * 4 + 1]; 
    char* t = tmp;

    size_t i = 0;
    while (i < len) {
        
        if (i + 2 < len && str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c') {
            strcat(t, "***");
            t += 4;
            i += 3;
        }
        else {
            *t++ = str[i++];
        }
    }
    *t = '\0';

    
    strcpy(str, tmp);
    delete[] tmp; 
    return str;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;

    char* modifiedStr = Change(str);
    cout << "Modified string : " << modifiedStr << endl;

    return 0;
}
