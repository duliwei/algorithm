```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, b, i;

    srand((unsigned int)time(NULL));
   	
   	a = rand() % 100 + 1;

    for(i = 1; i <= 10; i++)
    {
    	int j = 10 - i;
    	scanf("%d", &b);

    	if(a == b)
    	{	
    		if(i <= 3)
    			printf ("Perfect!");
    		else if(i > 3 && i <= 6)
    			printf ("Good!");
    		else
    			printf ("Just so so!");
    		printf (",您一共用了%d次\n", i);
    		break;
    	}else if(a > b){
    		if(j)
    			printf ("您猜小了,还有%d次机会\n", j);
    		else
    			printf ("Game Over\n");
    	}else{
    		if(j)
    			printf ("您猜大了,还有%d次机会\n", j);
    		else
    			printf ("Game Over\n");
    	}
    	
    }
    
    return 0;
}
```c
