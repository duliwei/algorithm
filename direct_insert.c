/*直接插入排序*/
#include <stdio.h>
void pri();
int main()
{
    int a[]={98,76,109,34,67,190,80,12,14,89,1};
    int k=sizeof(a)/sizeof(a[0]);
    int j;
    int i=1;
    pri(a, k);

    for(;i<k;i++)
    {
        if(a[i]<a[i-1]) //第一个自成序列 从第二个开始比较
        {
            int temp=a[i];
            for(j=i-1;j>=0 && a[j]>temp;j--)//将当前和已插入并排序的进行比较 遍历比当前大的
            {
                a[j+1]=a[j];//比当前大的往后移
            }
            a[j+1]=temp;//将当前的插入正确位置
        }
	pri(a, k);
    }
    return 0;
}

void pri(int a[], int k)
{
    int f=0;
    for(;f<k;f++)
    {
        printf("%d ", a[f]);
    }
    printf("\n\n");
}
