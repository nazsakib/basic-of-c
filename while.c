/******************************************************************************************************************************
*                                             Sakib MD Nazmush                                                                *                                                                                                      *
*                                                                                                                             *                                                                                                                              *
*                                                                                                                             *                                                                                                                              *
*                                  "All in one program using WHILE LOOP"                                                      *
*                                                                                                                             *                                                                                                                              *
*                                                                                                                             *                                                                                                                              *
*******************************************************************************************************************************/


#include <stdio.h>
int main()
{
           /* 1. Display the number series 1,2,3,4.....n and read the input from user */
    int i;
    int n;
    printf("The number series 1,2,3,4 is: \n");
    printf("Program 1> Please enter the value of n: ");
    scanf("%d", &n);
    i = 1;
    while(i <= n) {
        printf("\n%d", i);
        i++;
    }

        /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
    // int i;
    int m;
    printf("\n\nThe number series m, m-1, m-2 is: \n");
    printf("Program 2> Please enter the value of m: ");
    scanf("%d", &m);
    i = m;
    while(i >= 1) {
        printf("%d\n", i);
        i = i-1;
    }

        /* 3. Display the name 10 times using for loop */
    // int i;
    char ch;
    printf("\n\nDisplaying the name 10 times: \n");
    printf("Program 03> Display the name 10 times: \n");
    scanf("%c", &ch);
    i = 1;
    while(i <= 10) {
        printf("Sakib MD Nazmush\n");
        i++;
    }

        /* 4. Display the number series 1,2,3,4,....9,10. */
    // int i;
    printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
    i = 1;
    while(i <= 10) {
        printf("%d\n", i);
        i++;
    }

        /* 5. Display the number series 1,3,5,7,9 */
    // int = i;
    printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
    i = 1;
    while(i <= 9) {
        printf("%d\n", i);
        i = i + 2;
    }

        /* 6. Display the number series 2,4,6,8,10 */
    // int i;
    printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
    i = 2;
    while(i <= 10) {
        printf("%d\n", i);
        i = i + 2;
    }

        /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
    // int i;
    printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
    i = 5;
    while(i <= 50) {
        printf("%d\n", i);
        i = i + 5;
    }

        /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
    // int i;
    printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
    i = 10;
    while(i >= 1) {
        printf("%d\n", i);
        i--;
    }

        /* 9. Display the number series 10,8,6,4,2 */
    // int i;
    printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
    i = 10;
    while(i >= 1) {
        printf("%d\n", i);
        i = i - 2;
    }

        /* 10. Display the number series 9,7,5,3,1 */
    // int i;
    printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
    i = 9;
    while(i >= 1) {
        printf("%d\n", i);
        i = i -2;
    }

        /* 11. Display the number series 1,3,5 */
    // int i;
    printf("\n\nProgram 11> Display the number series 1,3,5: \n");
    i = 1;
    while(i <= 5) {
        printf("%d\n", i);
        i = i + 2;
    }
        /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
    char x;
    printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
    x = 'A';
    while(x <= 'Z') {
        printf("%c\t", x);
        x++;
    }

        /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
    //char x;
    printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
    x = 'a';
    while(x <= 'z') {
        printf("%c\t", x);
        x++;
    }

        /* 14. Display the alphabet series A,C,E,G,....W,Y */
    //char x;
    printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
    x = 'A';
    while(x <= 'Y') {
        printf("%c\t", x);
        x = x + 2;
    }

        /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
    //char x;
    printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
    x = 'A';
    while(x <= 'Z') {
        printf("%d\t", x);
        x++;
    }

        /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    //char x;
    printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
    x = 'a';
    while(x <= 'z') {
        printf("%d\t", x);
        x++;
    }

        /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
    //char x;
    printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 65;
    while(x <= 90) {
        printf("%c\t", x);
        x++;
    }


        /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    //char x;
    printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 97;
    while(x <= 122) {
        printf("%c\t", x);
        x++;
    }

        /* 19. Display the number series 1,4,9,16,....,81,100 */
    // int i;
    printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
    i = 1;
    while(i <= 10) {
        printf("%d\t", i*i);
        i++;
    }




    return 0;
}
