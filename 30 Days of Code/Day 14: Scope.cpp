#include <unorderedmap>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(int arr[])
    {
        for(int i=0;i<arr.size();i++)
        {
            elements.push_back(arr[i]);
        }
    }
    computeDifference()
    {   maximumDifference=0;
        for(int i=0;i<elements.size();i++)
        {
            for(j=0;j<i;j++)
            {
                if(abs(elements[i]-elements[j])>maximumDifference)
                    maximumDifference=abs(elements[i]-elements[j]);
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N; //input N
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
