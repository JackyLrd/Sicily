#include<stdio.h>
int n;  ///���ָ�����n�ܴ�(n>10000)
int dui[250001];

void create_dui(int);
void UpToDown(int,int);
int main()
{
    int i;
    int tmp,min;
	scanf("%d",&n);
	int K=n/2;
    for(i=1;i<=K;i++) ///������K��
        scanf("%d",&dui[i]);
    create_dui(K);  ///��С����
    for(i=K+1;i<=n;i++)
    {
        scanf("%d",&tmp);
        if(tmp>dui[1])  ///ֻ�д��ڸ��ڵ�Ŵ���
        {
        	min=dui[1];
            dui[1]=tmp;
            UpToDown(1,K);    ///���µ�����
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
    int pos=K/2;      ///��ĩβ������һ����Ҷ�ڵ��λ��K/2
    for(i=pos;i>=1;i--)
        UpToDown(i,K);
}

void UpToDown(int i,int K)
{
    int t1,t2,tmp,pos;
    t1=2*i; ///����(���ڵĻ�)
    t2=t1+1;    ///�Һ���(���ڵĻ�)
    if(t1>K)    ///�޺��ӽڵ�
        return;
    else
    {
        if(t2>K)  ///ֻ������
            pos=t1;
        else
            pos=dui[t1]>dui[t2]? t2:t1;

        if(dui[i]>dui[pos]) ///pos�������Ӻ����У���ֵ��С�ߵ�λ��
        {
            tmp=dui[i];dui[i]=dui[pos];dui[pos]=tmp;
            UpToDown(pos,K);
        }
    }
}
