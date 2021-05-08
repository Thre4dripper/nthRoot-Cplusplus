#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

double nth_root(double,int);
double power(double,int);
int main(){system("cls");
    double num,N;
    cout<<"Enter Number->";
    cin>>num;
    cout<<"Enter Nth root->";
    cin>>N;

    cout<<nth_root(num,N);

   getch();
}

double nth_root(double num,int N){
    double low,high,mid,temp;

if(num>1){ low=1;high=num;}
else{low=0;high=1;}

    while(true){
         mid=(low+high)/2;

        if(temp==mid)break;

        temp=mid;
            if(power(mid,N)>=num){
                high=mid;
            }
            else if(power(mid,N)<=num){
                low=mid;
            }
    }
   return mid;
}

double power(double num,int N){
    double p=1;
    for(int i=1;i<=N;i++){
        p*=num;
    }

    return p;
}
