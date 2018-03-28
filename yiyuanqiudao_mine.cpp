#include<cstdio>
int main(){
    int a[100]={-1};
    int k,e;
    int i=1;
    while(scanf("%d%d",&k,&e)!=EOF){
        a[i]=k;a[i+1]=e;
        i+=2;
    }
    i-=1;
    if(i==2){
        printf("0 0");
    }else{
         for(int j=1;j<=100;j+=2){
             if(a[j+1]>0){
                a[j]*=a[j+1];
                a[j+1]-=1;
             }else if(a[j+1]==0){
                a[j]=-1;a[j+1]=-1;
               	break;
            }else if(a[j]==-1) 
                {break;}
        }
         for(int i=1;i<=100;i++){
            if(a[i]==-1) break;
            if(i!=1){printf(" ");}
            printf("%d",a[i]);
        }
    }
    return 0;
}