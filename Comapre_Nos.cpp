#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << "All three numbers are equal.";
    } else if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2;
    } else {
        cout << "The largest number is: " << num3;
    }

    return 0;
}

/*
Sample Output:

Enter the first number: 22  
Enter the second number: 77  
Enter the third number: 21  
The largest number is: 77

-----------------------------

Enter the first number: 33  
Enter the second number: 33  
Enter the third number: 33  
All three numbers are equal.
*/
