#include<iostream>
using namespace std;
int main(){
    int N;
    int K;
    cin>>N>>K;
    int data[1000][2]={0};
    int grade_1_a=0;
    int grade_1_b=0;
    int grade_2_a=0;
    int grade_2_b=0;
    int grade_3_a=0;
    int grade_3_b=0;
    int grade_4_a=0;
    int grade_4_b=0;
    int grade_5_a=0;
    int grade_5_b=0;
    int grade_6_a=0;
    int grade_6_b=0;
    int total=0;
    for(int i=0;i<N;i++){
        cin>>data[i][0]>>data[i][1];
        if(data[i][1]==1){
           if(data[i][0]==0){
            grade_1_a++;
           }
           else
           grade_1_b++;

        }
        if(data[i][1]==2){
            if(data[i][0]==0){
            grade_2_a++;
           }
           else
           grade_2_b++;
        }
        if(data[i][1]==3){
           if(data[i][0]==0){
            grade_3_a++;
           }
           else
           grade_3_b++;
        }
        if(data[i][1]==4){
            if(data[i][0]==0){
            grade_4_a++;
           }
           else
           grade_4_b++;
        }
        if(data[i][1]==5){
            if(data[i][0]==0){
            grade_5_a++;
           }
           else
           grade_5_b++;
        }
        if(data[i][1]==6){
            if(data[i][0]==0){
            grade_6_a++;
           }
           else
           grade_6_b++;
        }

    }
    total=(grade_1_a +K-1)/K+(grade_1_b +K-1)/K
    +(grade_2_a +K-1)/K+(grade_2_b +K-1)/K
    +(grade_3_a +K-1)/K+(grade_3_b +K-1)/K
    +(grade_4_a +K-1)/K+(grade_4_b +K-1)/K
    +(grade_5_a +K-1)/K+(grade_5_b +K-1)/K
    +(grade_6_a +K-1)/K+(grade_6_b +K-1)/K;
    
cout<<total;
}