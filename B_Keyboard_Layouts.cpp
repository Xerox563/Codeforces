#include <iostream>
#include <string>
using namespace std;

// Function to create a mapping from the first layout to the second layout
void createLayoutMapping(string& layout1, string& layout2, char mapping[26]) {
    for (int i = 0; i < 26; i++) {
        mapping[layout1[i] - 'a'] = layout2[i];
    }
}

// Function to convert text from the first layout to the second layout
string convertText(string& text, char mapping[26]) {
    string convertedText = "";
    for (char c : text) {
        if (isalpha(c)) {
            if (isupper(c)) {
                convertedText += toupper(mapping[tolower(c) - 'a']);
            } else {
                convertedText += mapping[c - 'a'];
            }
        } else {
            convertedText += c;
        }
    }
    return convertedText;
}

int main() {
    string layout1, layout2, text;
    cin >> layout1 >> layout2 >> text;

    char mapping[26];
    createLayoutMapping(layout1, layout2, mapping);

    string result = convertText(text, mapping);
    cout << result << endl;

    return 0;
}
