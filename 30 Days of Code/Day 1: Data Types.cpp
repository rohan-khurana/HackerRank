#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 45.0;
    string s = "HackerRank ";
    int j;
    double d2;
    string s2;
    cin>>j;
    cin>>d2;
    getline(cin >> ws, s2);
    s=s+s2;
    d2=d2+d;
    cout<<i+j<<endl;
    printf("%.1f\n",d2);
    cout<<s;
    return 0;
}
