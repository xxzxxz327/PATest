#include<cstdio>
#define CLK_TLK 100
int main(){
    int c1,c2;
    int s=0;
    scanf("%d %d",&c1,&c2);
    int up=(c2-c1)%100;
    if(up>=50){
            s=(c2-c1)/CLK_TLK+1;
    }else{
        s=(c2-c1)/CLK_TLK;
    }
    printf("%02d:%02d:%02d",s/3600,(s%3600)/60,s%60);
    return 0;

}
//判断比较大的整数四舍五入，可以看除之前减法余数