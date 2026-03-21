#include<iostream>
#include<string>

using namespace std;
int main(){
    string N;
    cin>>N;
    int count[10]={0};
    for(int i=0;i<N.length();i++){
        count[N[i]-'0']++;
        
    }
    int a=count[6]+count[9];
    count[6]=(a+1)/2;
    count[9]=0;
    int max=count[0];
    for(int i=0;i<9;i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    cout<<max;
    
    
}