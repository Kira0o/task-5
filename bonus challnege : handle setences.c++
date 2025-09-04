#include <iostream>
#include <string>
#include <cctype>
using namespace std;



int main() {
 string sentence;
    int vowelCount = 0;

    cout << "german: ";
    getline(cin, sentence);

    for (char ch : sentence) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    cout << "the number of vowels in the sentence is: " << vowelCount << endl;























}
























