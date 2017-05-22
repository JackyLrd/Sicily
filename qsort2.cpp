#include <stdio.h>
void qsort(int a[],int l,int r);
int main(void)
{
	int n,i,j,k,a[5000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
//��������
void qsort(int s[], int l, int r)
{
    if (l < r)
    {
		//Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // ���������ҵ�һ��С��x����
				j--;  
            if(i < j) 
				{
				s[i] = s[j];
				i++;
			    }
			
            while(i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;  
            if(i < j) 
				{
				s[j] = s[i];
				j--;
			    }
        }
        s[i] = x;
        qsort(s, l, i - 1); // �ݹ���� 
        qsort(s, i + 1, r);
    }
}
