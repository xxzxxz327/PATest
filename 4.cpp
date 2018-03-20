#include<cstdio>
int main(){
    int n;
    char a;
    scanf("%d%c",&n,&a);
    int row=0;
    if(n%2==1)row=n/2+1;
    else row=n/2;
    for(int i=0;i<n;i++)
    {
        printf("%c",a);
    }printf("\n");
    for(int i=0;i<row-2;i++){
        printf("%c",a);
        for(int i=0;i<n-2;i++)
        {
            printf(" ");
        }
        printf("%c\n",a);
    }
    for(int i=0;i<n;i++)
    {printf("%c",a);}
    return 0;
}