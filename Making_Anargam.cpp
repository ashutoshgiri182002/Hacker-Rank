#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    string s1;
    string s2;
    cin>>s1>>s2;

    vector<int>v(123,0);
    vector<int>v1(123,0);
    for(int i=0;i<s1.size();i++){
        v[s1[i]]++;
    }

     for(int i=0;i<s2.size();i++){
        v1[s2[i]]++;
    }

    vector<int>v3;
    int cnt;
    for(int i=0;i<123;i++){
       cnt=abs(v[i]-v1[i]);
       v3.push_back(cnt);

    }

    int sum=0;
    for(int i=0;i<v3.size();i++){
        sum=sum+v3[i];
    }

    cout<<sum;

    return 0;
}
