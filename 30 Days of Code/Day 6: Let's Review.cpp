#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    string S;
    cin>>T;
    for(int i=0;i<T;i++)
    {       
        cin>>S;
        string s1,s2;
        for(int j=0;j<S.size();j++)
        {   
            if(j%2==0)
                s1+=S[j];
            else
                s2+=S[j];
        }
        cout<<s1<<" "<<s2<<endl;
    }
return 0;
}
