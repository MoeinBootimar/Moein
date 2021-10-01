#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "Enter the measurements: ";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
        cout << "Correct Inputs!" << endl;
    else
        cout << "Wrong Inputs! " << endl;

    return 0;
}