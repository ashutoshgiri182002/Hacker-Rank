#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[n-1];
    for(int i=0;i<n;i++){
        if( temp<arr[n-1-i-1]){
           arr[n-i-1]= arr[n-1-i-1];
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        else if(temp>=arr[n-1-i-1]){
            arr[n-i-1]= temp;
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            break;
        }
        
    }
    
    return 0;
}
