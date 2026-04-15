#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> y;
    if (y == 10)
        x = 0;
    else
        x = 1;
    cout << x;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int temperature;
    cin >> temperature;
    if (temperature >= -50 && temperature <= 150)
        cout << "The number is valid";
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "Larger: " << a << " Smaller: " << b;
    else
        cout << "Larger: " << b << " Smaller: " << a;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    double a = 10, b = 10;
    a = a + 0.2;
    if (a > b)
        cout << "a is larger";
    else
        cout << "b is larger";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double num, den;
    cin >> num >> den;
    if (den != 0)
        cout << num / den;
    else
        cout << "Division by zero is not possible";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int a = 2, b = 4, c = 6;
    cout << (a == 4 || b > 2) << endl;
    cout << (6 <= c && a < 3) << endl;
    cout << (1 != b && c != 3) << endl;
    cout << (a >= -1 || a <= b) << endl;
    cout << (!(a > 2)) << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    if (r1 < r2 && r1 < r3)
        cout << "Runner 1 is first";
    else if (r2 < r1 && r2 < r3)
        cout << "Runner 2 is first";
    else
        cout << "Runner 3 is first";

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        double r;
        cin >> r;
        cout << 3.14159 * r * r;
    }
    else if (choice == 2) {
        double l, w;
        cin >> l >> w;
        cout << l * w;
    }
    else if (choice == 3) {
        double b, h;
        cin >> b >> h;
        cout << 0.5 * b * h;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++)
        cout << ch << " = " << (int)ch << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double mass, weight;
    cin >> mass;
    weight = mass * 9.8;

    cout << weight << endl;

    if (weight > 1000)
        cout << "Too heavy";
    else if (weight < 10)
        cout << "Too light";

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double sales;
    cin >> sales;

    if (sales > 50000)
        sales += sales * 0.25 + 250;

    cout << sales;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double income;
    int years;

    cin >> income >> years;

    if (income >= 35000 && years > 5)
        cout << "Qualified";
    else
        cout << "Not Qualified";

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int model;
    cin >> model;

    if (model == 300)
        cout << "Picture-in-picture, Stereo, Remote";
    else if (model == 200)
        cout << "Stereo, Remote";
    else if (model == 100)
        cout << "Remote only";

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int m, d, y;
    cin >> m >> d >> y;

    if (m * d == y)
        cout << "Magic date";
    else
        cout << "Not magic";

    return 0;
}




#include <iostream>
using namespace std;
int main() {
    double sales, commission;

    cin >> sales;

    if (sales <= 10000)
        commission = 0.10;
    else if (sales <= 15000)
        commission = 0.15;
    else
        commission = 0.20;

    cout << commission;
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    double balance, fee = 10;
    int checks;

    cin >> balance >> checks;

    if (checks < 20) fee += checks * 0.10;
    else if (checks <= 39) fee += checks * 0.08;
    else if (checks <= 59) fee += checks * 0.06;
    else fee += checks * 0.04;

    if (balance < 400) fee += 15;

    cout << fee;
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int choice;
    cin >> choice;

    if (choice == 1)
        cout << 249;
    else if (choice == 2)
        cout << 199;
    else if (choice == 3)
        cout << 49;

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int type, months;

    cin >> type >> months;

    if (type == 1)
        cout << months * 40;
    else if (type == 2)
        cout << months * 20;
    else if (type == 3)
        cout << months * 30;

    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int pkg;
    double gb, total;

    cin >> pkg >> gb;

    if (pkg == 1) {
        total = 39.99;
        if (gb > 4) total += (gb - 4) * 10;
    }
    else if (pkg == 2) {
        total = 59.99;
        if (gb > 8) total += (gb - 8) * 5;
    }
    else {
        total = 69.99;
    }

    cout << total;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int seconds;
    cin >> seconds;

    if (seconds >= 86400)
        cout << seconds / 86400 << " Days";
    else if (seconds >= 3600)
        cout << seconds / 3600 << " Hours";
    else if (seconds >= 60)
        cout << seconds / 60 << " Minutes";

    return 0;
}
