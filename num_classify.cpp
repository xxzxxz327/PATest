#include<cstdio>
int main(){
    int count[5]={0},ans[5]={0};
    int n;
    int a;
    int count_n=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a%5==0){//A1:能被５整除的所有数字中偶数的和
            if(a%2==0){
                count[0]++;
                ans[0]+=a;
            }
        }else if(a%5==1){//A2：被５除后余１的数字安给出的顺序交错求和
            count[1]++;
             count_n++;
            if(count_n%2==0){/
                ans[1]-=a;
            }else{ans[1]+=a;}
        }else if(a%5==2){//A2:被５除后余２的数字个数
            count[2]++;
            ans[2]++;
        }else if(a%5==3){//A3:被５除后余３的数字平均数，精确到小数点后一位
            count[3]++;
            ans[3]+=a;
        }else if(a%5==4){//A4:被５除后余４数字中最大
            count[4]++;
            if(a>ans[4]){
                ans[4]=a;
            }
        }
    }
     if(count[0]==0){
            printf("N ");
        }else{printf("%d ",ans[0]);}
        if(count[1]==0) printf("N ");
        else{printf("%d ",ans[1]);}
        if(count[2]==0) printf("N ");
        else printf("%d ",ans[2]);
        if(count[3]==0){printf("N ");}
        else printf("%.1f  ",(double)ans[3]/count[3]);
        if(count[4]==0) printf("N");
        else printf("%d",ans[4]);

        return 0;
}