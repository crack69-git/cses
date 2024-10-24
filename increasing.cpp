#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for(long long i = 0; i < t; i++) {
        cin >> arr[i];
    }

    long long cnt = 0,cnt1=0;
    for(long long i = 0; i < t - 1; i++) {
        if(arr[i+1] < arr[i]) {
            cnt += (arr[i] - arr[i+1]);
            arr[i+1]+=(arr[i]-arr[i+1]);
        }
    }

    cout << cnt;
    return 0;
}
