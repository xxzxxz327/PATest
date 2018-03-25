#include<cstdio>
#define N 54
int main(){
    int start[N],end[N],next[N];
    char mp[5]={'S','H','C','D','J'};
    int n;
    for(int i=0;i<N;i++){
        start[i]=i+1;
    }
    scanf("%d",&n);
    for(int i=0;i<N;i++){
        scanf("%d",&next[i]);
    }
    while(n--){
        for(int i=0;i<N;i++){
            end[next[i]-1]=start[i];
        }
        for(int i=0;i<N;i++){
            start[i]=end[i];
        }
    }
    for(int i=0;i<N;i++){
        printf("%c",mp[(start[i]-1)/13]);
        printf("%d",(start[i]-1)%13+1);
        if(i!=N-1) printf(" ");
    }
    return 0;
}