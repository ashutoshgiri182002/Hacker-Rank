#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int t;
    cin>>t;
    
    float res = (log(t+2)-log(3))/log(2);
    long long int x = floor(res) +1;
    
    long long int sum = (3*pow(2,x)) - 2;
    
    cout<<sum - t<<endl;
    
    
    return 0;
}
