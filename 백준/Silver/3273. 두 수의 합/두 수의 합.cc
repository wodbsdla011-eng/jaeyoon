#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int data[100000];

    for(int a=0;a<n;a++){
        cin>>data[a];
    }

    int x;
    cin>>x;

    bool b[1000001]={false};

    int count=0;

    for(int i=0;i<n;i++){

        int c=x-data[i];

        if(c>0 && c<=1000000 && b[c]){
            count++;
        }

        b[data[i]]=true;
    }

    cout<<count;
}