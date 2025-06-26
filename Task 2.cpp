#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> numbers;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    int searchNum;
    cout << "Enter a number to search: ";
    cin >> searchNum;

    if (numbers.find(searchNum) !=  numbers.end()) {
        cout << "The number was found in the set: \n";
    } else {
        cout << "The number was NOT found in the set: \n";
    }

    cout << "All elements in the set: \n";
    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}