#include<cstdio>
#define MAXN 100005
#define MAXQ 10005
int main(){
    int dis[MAXN]={0},A[MAXN]={0};
    int ans[MAXQ]={-1};
    int sum=0;
    int left,right;
    int temp=0;
    int querry;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
        dis[i]=sum;
    }
    scanf("%d",&querry);
    for(int i=1;i<=querry;i++){
        scanf("%d %d",&left,&right);
        if(left>right){
            temp=left;
            left=right;
            right=temp;
        }
        int a=dis[right-1]-dis[left-1];
        int b=sum-a;
        if(a>b)ans[i]=b;
        else ans[i]=a;
    }
    for(int i=1;i<=querry;i++){
        printf("%d",ans[i]);
        if(i!=querry)printf("\n");
    }
    return 0;
}