#include<cstdio>
int change(char c){
    if(c=='B') return 0;
    else if(c=='C')return 1;
    else if(c=='J')return 2;
}
int main(){
    int n;
    char a_c,b_c;
    int a,b;
    int A[3]={0},B[3]={0};
    int a_win_most[3]={0},b_win_most[3]={0};
    scanf("%d",&n);
    while(n--){
        getchar();
        scanf("%c %c",&a_c,&b_c);
        a=change(a_c);
        b=change(b_c);
        if((a+1)%3==b){
            A[0]++;B[2]++;
            if(a==0)a_win_most[0]++;
            else if(a==1)a_win_most[1]++;
            else if(a==2)a_win_most[2]++;
        }else if(a==b){
            A[1]++;B[1]++;
        }else if((b+1)%3==a){
            A[2]++;B[0]++;
             if(b==0)b_win_most[0]++;
            else if(b==1)b_win_most[1]++;
            else if(b==2)b_win_most[2]++;
        }
    }
    for(int i=0;i<3;i++){
        printf("%d",A[i]);
        if(i!=2)printf(" ");
    }
    printf("\n");
     for(int i=0;i<3;i++){
        printf("%d",B[i]);
        if(i!=2)printf(" ");
    }
    int a_most=0,b_most=0;
    for(int i=0;i<3;i++){
        if(a_win_most[i]>a_win_most[a_most])
            a_most=i;
        if(b_win_most[i]>b_win_most[b_most])
            b_most=i;
    }
    if(a_most==0)printf("B ");
    else if(a_most==1)printf("C ");
    else if(a_most==2)printf("J ");
    if(b_most==0)printf("B");
    else if(b_most==1)printf("C");
    else if(b_most==2)printf("J");
    return 0;
}