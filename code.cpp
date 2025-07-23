#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "How many numbers do you want to reverse? ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        long long num, reversed = 0;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        long long original = num; // optional: keep original for display

        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        cout << "Reversed of " << original << ": " << reversed << endl;
    }

    return 0;
}

