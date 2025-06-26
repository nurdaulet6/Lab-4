#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string expression;
    cout << "Enter expression: ";
    getline(cin, expression);

    stack<char> s;
    bool isBalanced = true;

    for (char ch : expression) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                isBalanced = false;
                break;
            } else {
                s.pop();
            }
        }
    }
    if (!s.empty()) {
        isBalanced = false;
    }

    if (isBalanced) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}