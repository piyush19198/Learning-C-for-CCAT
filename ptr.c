#include<stdio.h>
int main(void)
{
    int num;
    num=20;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    printf("\n    num %d         &num %d",num,&num);
    printf("\n  *ptr1 %d         ptr1 %d     &ptr1 %d",*ptr1,ptr1,&ptr1);
    printf("\n **ptr2 %d        *ptr2 %d      ptr2 %d       &ptr1 %d",**ptr2,*ptr2,ptr2,&ptr2);

    printf("\n");

    char ch;
    ch ='A';
    char *cptr1 = &ch;
    char **cptr2 = &cptr1;
    printf("\n      ch %c         &ch %d",ch,&ch);
    printf("\n  *cptr1 %c       cptr1 %d    &cptr1 %d",*cptr1,cptr1,&cptr1);
    printf("\n **cptr2 %c      *cptr2 %d     cptr2 %d       &cptr2 %d",**cptr2,*cptr2,cptr2,&cptr2);

    return 0;
}