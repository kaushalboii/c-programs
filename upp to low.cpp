#include<iostream>
#include<string>
using namespace std;

class StringConverter {
public:
    string convert(string str, bool toUpper) {
        for (int i = 0; i < str.length(); i++) {
            if (toUpper) {
                str[i] = toupper(str[i]);  
            } else {
                str[i] = tolower(str[i]); 
            }
        }
        return str;
    }
};

int main() {
    StringConverter converter;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Upper case: " << converter.convert(input, true) ;
    cout << "\nLower case: " << converter.convert(input, false) ;
    return 0;
}

