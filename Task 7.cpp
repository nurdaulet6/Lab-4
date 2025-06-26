#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    for (int i = 1; i <= 20; ++i) {
        numbers.push_back(i);
    }

    std::reverse(numbers.begin(), numbers.end());

    int evenCount = std::count_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });
    std::cout << "Number of even elements: " << evenCount << std::endl;

    numbers.erase(
        std::remove_if(numbers.begin(), numbers.end(), [](int n) {
            return n % 3 == 0;
        }),
        numbers.end()
    );

    std::cout << "Vector after removing elements divisible by 3:\n";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
