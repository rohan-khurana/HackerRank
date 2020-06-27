#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int a=1;a<=n;a++)
    {
        int x,count=0;
        cin>>x;
        if(x==1){
            cout<<"Not prime\n";
            continue;
        }
        for(int i = 2; i <= sqrt(x); i++) {
        if(x%i == 0){
            cout<<"Not prime\n";
            count=1;
            break;
        }}
        if(count==0)
            cout<<"Prime\n";
    }

    return 0;
}
