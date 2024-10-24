#include <bits/stdc++.h>
using namespace std;

int main()
{long int a,b=0,n,c;
cin>>n;
    for(int i=1;i<n;i++){
        cin>>a;
        b=b+a;
    }

    c=(n*(n+1))/2-b;
    cout<<c;
    return 0;
}
