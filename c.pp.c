#include<stdio.h>
int main()
{
    int a[5]={2,5,7,9,4};
    int i,max,loc;
    loc=0;
    max = a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
           max=a[i];
           loc=i;
        }
    }
     printf("max=%d, loc=%d" ,max,loc);

}

