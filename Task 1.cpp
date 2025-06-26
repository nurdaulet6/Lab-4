#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    vector<int> numbers;

    srand(time(0));

    for (int i = 0; i < 10; ++i) {
        int randomNumber = rand() % 100 + 1;
        numbers.push_back(randomNumber);
    }

    cout << "Vector: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int minValue = *min_element(numbers.begin(), numbers.end());
    int maxValue = *max_element(numbers.begin(), numbers.end());

    cout << "Minimum: " << minValue << endl;
    cout << "Maximum: " << maxValue << endl;

    auto last = unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    cout << "Without duplicates:";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    
    }
    cout << endl;

    return 0;
}