#include<stdio.h>

int main(void)
{
    float f1=9.456;
    printf("Float value : %f",f1);
    printf("\n size of f1 variable : %d",sizeof(f1));
    printf("\n size of float datatype : %d",sizeof(float));
    printf("\n size of any decimal number(without f) :%d ",sizeof(4.32));
    //sizeof(4.32)
    // it is considered as double data type
    printf("\n size of any decimal number :%d ",sizeof(4.32f));

    return 0;
}



// int main(void)

// {
//     char ch='b';
//     printf("value of char : %c ascii value of character : %d ",ch,ch);
//     return 0;
// }


// char : 1byte
//1byte = 8 bits
// 2^8 = 256
//0 to 255
// ASCII CODE
//American Standard Code for Information Interchange
// Numeric Value is given to each character
// A - Z : 65 to 90   A : 65 B : 66 C : 67.....
// a - z : 97 to 122
// 0 - 9 :48 to 57
// special character 


/*
int main(void)
{
    char ch='M'; 
    printf("Character value : %c ",ch);
    printf("\n size of ch variable : %d",sizeof(ch));
                    //sizeof(char) 
                    // 1byte
    printf("\n size of character data type : %d",sizeof(char));
    printf("\n size of any character : %d",sizeof('m'));

    return 0;
}
*/

/*

//sizeof() is function
int main(void)
{
    int num=30; //one integer variable intiailization
    printf("Num : %d",num);
    printf("\n size of num variable : %d",sizeof(num));
    printf("\n size of integer datatype : %d",sizeof(int));
    printf("\n size of any whole number  : %d ",sizeof(50));

    return 0;
}

*/