using namespace std;
#include<cmath>
#include <iostream>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter first point:\n";
    cin >> x1 >> y1;
    cout << "Enter second point:\n";
    cin >> x2 >> y2;
    cout << "Enter third point:\n";
    cin >> x3 >> y3;
    
    double f1, f2;
        f1 = (x1 + x2 + x3) / 3;
        f2 = (y1 + y2 + y3) / 3;

    double a, b, c;
        a = sqrt(pow((x1 - f1), 2) + pow((y1 - f2), 2));
        b = sqrt(pow((x2 - f1), 2) + pow((y2 - f2), 2));
        c = sqrt(pow((x3 - f1), 2) + pow((y3 - f2), 2));
        if (a < b && a < c) 
            cout << "Result: \n" << a;
        else if (b < a && b < c) 
            cout << "Result: \n" << b;
        else cout << "Result: \n" << c;
}

