#include<stdio.h>
int n;  ///数字个数，n很大(n>10000)
int dui[250001];

void create_dui(int);
void UpToDown(int,int);
int main()
{
    int i;
    int tmp,min;
	scanf("%d",&n);
	int K=n/2;
    for(i=1;i<=K;i++) ///先输入K个
        scanf("%d",&dui[i]);
    create_dui(K);  ///建小顶堆
    for(i=K+1;i<=n;i++)
    {
        scanf("%d",&tmp);
        if(tmp>dui[1])  ///只有大于根节点才处理
        {
        	min=dui[1];
            dui[1]=tmp;
            UpToDown(1,K);    ///向下调整堆
        }
        else
        {
        	if(tmp>=min)
        		min=tmp;
		}
    }
    //printf("%d,%d\n", min, dui[1]);
    if(n % 2 == 0)
    {
    	printf("%.1f\n", (double(dui[1]) + double(min)) / 2);
	}
    else
    {
    	printf("%d\n", dui[1]);
	}
    return 0;
}

void create_dui(int K)
{
    int i;
    int pos=K/2;      ///从末尾数，第一个非叶节点的位置K/2
    for(i=pos;i>=1;i--)
        UpToDown(i,K);
}

void UpToDown(int i,int K)
{
    int t1,t2,tmp,pos;
    t1=2*i; ///左孩子(存在的话)
    t2=t1+1;    ///右孩子(存在的话)
    if(t1>K)    ///无孩子节点
        return;
    else
    {
        if(t2>K)  ///只有左孩子
            pos=t1;
        else
            pos=dui[t1]>dui[t2]? t2:t1;

        if(dui[i]>dui[pos]) ///pos保存在子孩子中，数值较小者的位置
        {
            tmp=dui[i];dui[i]=dui[pos];dui[pos]=tmp;
            UpToDown(pos,K);
        }
    }
}
