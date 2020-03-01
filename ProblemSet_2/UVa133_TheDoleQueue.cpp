/*
每天所有来申请救济品的人会被放在一个大圆圈，面朝里面。选定一个人为编号 1 号，
其他的就从那个人开始逆时针开始编号直到 N<20。一个官员一开始逆时针数，数 k 个申
请者，然后另一个官员第 N 个始顺时针方向数 m 个申请者，这两个人就出圆圈。如
果两个官员数的是同一个人，那个人则出圈，如果选了两个不同的人，则先输出第一
个第一个官员数出的那个人，然后2个官员再在剩下的人里面继续选直到没人剩下来，
注意两个被选 中的人是同时走掉的，所以就有可能两个官员选中一个人。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXN 25
int n,k,m,d,a[MAXN];
int go(int p,int d, int t);
int main(){
    scanf("%d %d %d",&n,&k,&m);
    for(int i=0;i<n;i++){
        a[i]=i+1;//输出时p+1，出队编号比数组编号大1
    }
        int res=n;//剩余人数
        int p1=n-1;//对应n号
        int p2=0;//对应1号
        while(res){
            p1=go(p1,1,k);
            p2=go(p2,-1,m);
            printf("%3d",p1+1);
            res--;
            if(a[p2]!=a[p1]){
                printf("%3d",p2+1);
                res--;
            }
            a[p1]=a[p2]=0;
            if(res){
                printf(",");
            }
        }
    
    printf("\n");
    system("pause");
    return 0;
}
int go(int p,int d,int t)
{
    while(t--){//t=1时p未变化，从而p+1是原本对应的编号
        do{
            p=(p+d+n)%n;//KEY POINT
        }while(a[p]==0);//如果为0，就继续走
    }
    return p;
}