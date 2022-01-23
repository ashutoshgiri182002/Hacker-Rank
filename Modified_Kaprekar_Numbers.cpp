#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int a,b;
    cin>>a>>b;
    
     long long int sq,rem,q;
     int cnt1=0;
     
     for(long long int i=a;i<=b;i++){
          sq= i*i;
           long long int st=i;
         int cnt=0;
         //count no. of digit of our number
         while(i>0){
            i=i/10;
            cnt++;
         } 
         
         long long int num =1;
         
         //get the right(rem) and left(q) no.
         while(cnt>0){
            num = num*10;
            cnt--; 
         }

         rem = sq%num;    
         q=sq/num;
         if((rem + q)==st){
             cnt1++;
             cout<<st<<" ";
         } 
         i=st;    
     
     }
     if(cnt1==0){
         cout<<"INVALID RANGE"<<endl;
     }
    
    return 0;
}






