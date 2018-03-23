#include<cstdio>
int main(){
    int a[100];
    int n,m;
    scanf("%d %d",&n,&m);
    m=m%n;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(m==0){
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1){
                printf(" ");
            }
        }
    }else{
            for(int i=0;i<m;i++){
                printf("%d",a[n-m+i]);
                count++;
                if(count!=n)
                printf(" ");
            }
            for(int i=0;i<n-m;i++){
                printf("%d",a[i]);
                count++;
                if(count!=0)printf(" ");
            }
        }
    return 0;
}