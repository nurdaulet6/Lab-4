#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main() {
    string sentence = "this is a test this is only a test";
    map<string, int> wordCount;

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}