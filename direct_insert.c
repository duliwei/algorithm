/*直接插入排序*/
```c
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
        if(a[i]<a[i-1]) 
        {
            int temp=a[i];
            for(j=i-1;j>=0 && a[j]>temp;j--)
            {
                a[j+1]=a[j];
            }
			
            a[j+1]=temp;
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
```
