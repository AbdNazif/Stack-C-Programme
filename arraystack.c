

#include<stdio.h>

int main()
{
    int stack[100],temp;
    int max = 100,i,top = -1;
    char ch;
    //Push Elements

    do
    {
        printf("Enter the elements to push:\n");
        scanf("%d",&temp);
        if (top < max)
        {
        stack[++top] = temp;
        }
        else
        {
            printf("The stack is full");
            break;
        }
        printf("PUSH MORE(Y/n)");
        scanf("%s",&ch);
        
    } while ((ch == 'Y')||(ch == 'y'));
    //POP THE ELEMEnTS

    printf("The order of the popping list is:\n");
    printf("\nTOP\n");
    for( ; top > -1 ; top --)
    {
        printf("%d\n",stack[top]);
    }
    printf("\nBOTTOM");

    

}