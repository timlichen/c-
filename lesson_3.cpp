#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int calculate_radius(float radius) {
    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;

    cout << area << endl;
    cout <<circumference << endl;
}

int main() {
    // enum yourCards {
    //     Ace = 43,
    //     King,
    //     Queen,
    //     Jack
    // };

    // yourCards queen_value = Queen;
    // cout << queen_value;

    // cout << sizeof(unsigned int);
    // cout << sizeof(int);
    // cout << sizeof(long int);

    float radius = 0;
    cout << "Please enter a radius value: ";
    cin >> radius;
    calculate_radius(radius);

    cout << M_PI;

    return 0;
}
