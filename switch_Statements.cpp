#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter the colour of the traffic light:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Yellow" << endl;
    cout << "3. Green" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You should STOP.";
            break;
        case 2:
            cout << "You should SLOW DOWN.";
            break;
        case 3:
            cout << "You can GO.";
            break;
        default:
            cout << "Invalid input! Please select 1, 2, or 3.";
    }

    return 0;
}

/*
========= Sample Output =========

Enter the colour of the traffic light:
1. Red
2. Yellow
3. Green
Choice: 2
You should SLOW DOWN.

----------------------------------

Enter the colour of the traffic light:
1. Red
2. Yellow
3. Green
Choice: 3
You can GO.

----------------------------------

Enter the colour of the traffic light:
1. Red
2. Yellow
3. Green
Choice: 5
Invalid input! Please select 1, 2, or 3.
*/
