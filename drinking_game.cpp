#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int failA=0,failB=0;
    int a_out,a_do,b_out,b_do;
    while(n--){
        scanf("%d %d %d %d",&a_out,&a_do,&b_out,&b_do);
        if((a_out+b_out)==a_do&&(a_out+b_out)!=b_do){
            failB++;
        }else if((a_out+b_out)==b_do&&(a_out+b_out)!=a_do){
            failA++;
        }
    }
    printf("%d %d",failA,failB);
    return 0; 
}