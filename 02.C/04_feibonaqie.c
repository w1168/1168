//by 1168
//斐波那契数列，先输入第一个N是要判断的正整数a的数量，要求斐波那契数列中第a个数是多少
//第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数a（1<a<30）。
#include<stdio.h>

int main()
    {
        int n,f[30]={1,1},a[30],i;          //生成斐波那契数列
        for (i=2;i<30;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        scanf("%d",&n);                     //输入n
        for (i=0;i<n; i++)                  //输入a[]
        {
            scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)                   //输出斐波那契数列中第a个数
        {
            printf("%d\n",f[a[i]-1]);       
        }   
        return 0;
    }//EZ