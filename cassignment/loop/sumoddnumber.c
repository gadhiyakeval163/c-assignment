//Looping programs:6.sum of odd number
#include <stdio.h>
int main()
{
        
   int num,a,sum=0;
    printf("input 10 number");
    for(a=1;a<=10;a++)
    {
        printf("number:%d\n",a);
        scanf("%d",&num);
        if(num%2!=0)
        {
		sum=sum+num;	
		}
    }
    printf("sum of odd number %d",sum);
    return 0;
}

