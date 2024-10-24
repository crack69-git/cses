#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int cnt=0,cnt1=1;
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            cnt1++;
        }
        else{
            if(cnt1>=cnt){
                cnt=cnt1;
            }
            cnt1=1;
        }

    }
    cout<<cnt;
return 0;
}
