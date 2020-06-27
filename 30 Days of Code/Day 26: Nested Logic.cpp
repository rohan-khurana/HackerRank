#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int eday, emon, eyear, aday, amon, ayear;
    cin >> aday >> amon >> ayear >> eday >> emon >> eyear;
    int fine = 0;
    int year = ayear - eyear;
    int month = amon - emon;
    int day = aday - eday;
    if (year > 0) {
        fine = 10000;
    }
    else if (month > 0 && year == 0) {
        fine = 500 * month;
    }
    else if (day > 0 && month == 0) {
        fine = 15 * day;
    }
    cout << fine << endl; 
    return 0;
}
