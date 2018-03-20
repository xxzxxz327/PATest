#include<cstdio>
int main(){
    long long qa=10000000000,pa=0;
    long long qb=10000000000,pb=0;
    long long a=1,b=1;
    long long tmpA=0,tmpB=0;
    long long sumA=0,sumB=0;
    long long A,Da,B,Db;
    scanf("%lld %lld %lld %lld",&A,&Da,&B,&Db);
    for(int i=0;i<11;i++)
    {
        tmpA=A/qa;
        if(tmpA==Da){
            sumA+=(tmpA*a);
            a*=10;
        }
        pa=qa/10;
        A=A%qa;
        qa/=10;
        tmpB=B/qb;
        if(tmpB==Db){
            sumB+=(tmpB*b);
            b*=10;
        }
        B=B%qb;
        qb/=10;
    }
    printf("%lld",sumA+sumB);
    return 0;
}