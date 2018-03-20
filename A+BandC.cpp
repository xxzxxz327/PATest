#include<cstdio>
#define maxn 10
int main(){
    long long a[maxn]={0};
    long long b[maxn]={0};
    long long c[maxn]={0};
    int n;
    int i=0;
    scanf("%d",&n);
    while(n--){
        scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
          if(a[i]+b[i]>c[i])
        {
            printf("case #%d: true\n",i);
        }else{
            printf("case #%d: false\n",i);
        }
        i++;
    }
    return 0;
}