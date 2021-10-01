#include <iostream>
using namespace std;
int main()
{
    float height , weight , BMI;
    cout << "Enter you'r height in Meters: ";
    cin >> height ;
    cout << "Enter you'r weight in KG: ";
    cin >> weight ;
    BMI = weight / (height * height);
    if (BMI < 18.5)
        cout << "UNDERWEIGHT" << endl;
    else if (BMI >= 18.5 && BMI < 24.9)
        cout << "NORMAL" << endl;
    else if (BMI >= 24.9 && BMI < 29.9)
        cout << "OVERWEIGHT" << endl;
    else if (BMI >= 29.9 && BMI < 34.9)
        cout << "OBESE" << endl;
    else if (BMI >= 34.9)
        cout << "EXTREMELY OBESE" << endl;
    return 0;
}