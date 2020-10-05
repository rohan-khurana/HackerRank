#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N; // input N
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0)
        cout<<"Weird";
    else
    {
        if(N>=2&&N<=5)  // conditional statement 1
            cout<<"Not Weird";
        else if(N>=6&&N<=20)  // conditional statement 2
            cout<<"Weird";
        else   //  // conditional statement 3
            cout<<"Not Weird";
    }
    return 0; 
}
