#include<cstdio>
#define maxn 210
int a[maxn]={0};
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d",i);
            break;
        }
        if(i==n-1){
            printf("%d",-1);
        }
    }
    return 0;
}