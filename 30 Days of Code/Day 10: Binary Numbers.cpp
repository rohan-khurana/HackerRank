#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int count = 0, maxCount = 0;
    while (n)
    {
        int rem = n % 2;        
        count = (count + rem) * rem;
        maxCount = max(count, maxCount);        
        n>>=1;
    }
    cout << maxCount << endl;
    return 2;
}
