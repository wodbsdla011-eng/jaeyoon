#include<iostream>
using namespace std;
int main(){
int A;
int B;
int C;
    cin>>A>>B>>C;
    int sum=A*B*C;
    int data[100]={0};
    int arr[10]={0};
    while(sum>0){
        int a=sum%10;
         arr[a]++;
        sum=sum/10;
        
}
    for(int i=0;i<10;i++){
cout<<arr[i]<<endl;}
}