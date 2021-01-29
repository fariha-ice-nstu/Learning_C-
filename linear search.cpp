#include<stdio.h>
int main()
{
    int num[6]={2,6,5,8,3,9};
    int value,pos=-1,i;
    printf("enter the number: ");
    scanf("%d",&value);

    for(i=0;i<6;i++)
    {
        if(num[i]== value)
        {
            pos=i+1;
            break;
        }
    }
    if(pos == -1)
        printf("not found");
    else
        printf("the value is %d position",pos);
}
