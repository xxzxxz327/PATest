#include<cstdio>
#define maxn 10000
int main(){
    int school_score[maxn]={0};
    int n;
    int num=-1;
    int score=0;
    int k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        scanf("%d",&score);
        school_score[num]+=score;
    }
    int max=school_score[0];
    for(int i=0;i<n;i++)
    {
        if(school_score[i]>max){
            max=school_score[i];
            k=i;
        }
    }
    printf("% d %d",k,max);
    return 0;
}