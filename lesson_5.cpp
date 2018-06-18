#include <iostream>

using namespace std;

int main() {

    // exercise 1

    // int number = 0;
    // cout << "Please enter a number: ";
    // cin >> number;

    // int result = ((number << 1) + 5) << 1;

    // cout << result << endl;

    // // exercise 2
    // int result_2 = number << 1 + 5 << 1;

    // cout << result_2 << endl;

    // exercise 3
    bool bool_1 = false;
    bool bool_2 = false;

    cout << "Please enter a boolean value: " << endl;
    cin >> bool_1;
    
    cout << "Please enter another boolean value: " << endl;
    cin >> bool_2;
    
    cout << "&= : " << (bool_1 & bool_2) << endl;
    cout << "|= : " << (bool_1 | bool_2) << endl;
    cout << "^= : " << (bool_1 ^ bool_2) << endl;

    return 0;
}