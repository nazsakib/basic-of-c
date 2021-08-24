/******************************************************************************************************************************
*                                              Sakib MD Nazmush                                                               *                                                                                                      *
*                                                                                                                             *                                                                                                                             *
*                                                                                                                             *                                                                                                                              *
*                                  "All in one program using FOR LOOP"                                                        *
*                                                                                                                             *                                                                                                                             *
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
    for(i=1; i<=n; i++)
    {
        printf("\n%d\t", i);
    }

        /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
    // int i;
    int m;
    printf("\n\nThe number series m, m-1, m-2 is: \n");
    printf("Program 2> Please enter the value of m: ");
    scanf("%d", &m);
    for(i=m; i>=1; i=i-1)
    {
        printf("\n%d\t", i);
    }

        /* 3. Display the name 10 times using for loop */
    // int i;
    char ch;
    printf("\n\nDisplaying the name 10 times: \n");
    printf("Program 03> Display the name 10 times: \n");
    scanf("%c", &ch);
    for(i=1; i<=10; i++)
    {
        printf("SAKIB MD NAZMUSH\n");
    }

        /* 4. Display the number series 1,2,3,4,....9,10. */
    // int i;
    printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i);
    }

        /* 5. Display the number series 1,3,5,7,9 */
    // int = i;
    printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
    for(i=1; i<=9; i=i+2)
    {
        printf("%d\t", i);
    }

        /* 6. Display the number series 2,4,6,8,10 */
    // int i;
    printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
    for(i=2; i<=10; i=i+2)
    {
        printf("%d\t", i);
    }

        /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
    // int i;
    printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
    for(i=5; i<=50; i=i+5)
    {
        printf("%d\t", i);
    }

        /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
    // int i;
    printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
    for(i=10; i>=1; i--)
    {
        printf("%d\t", i);
    }

        /* 9. Display the number series 10,8,6,4,2 */
    // int i;
    printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
    for(i=10; i>=1; i=i-2)
    {
        printf("%d\t", i);
    }

        /* 10. Display the number series 9,7,5,3,1 */
    // int i;
    printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
    for(i=9; i>=1; i=i-2)
    {
        printf("%d\t", i);
    }

        /* 11. Display the number series 1,3,5 */
    // int i;
    printf("\n\nProgram 11> Display the number series 1,3,5: \n");
    for(i=1; i<=5; i=i+2)
    {
        printf("%d\t", i);
    }

        /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
    char x;
    printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
    for(x='A'; x<='Z'; x++)
    {
        printf("%c\t", x);
    }

        /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
    //char x;
    printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
    for(x='a'; x<='z'; x++)
    {
        printf("%c\t", x);
    }

        /* 14. Display the alphabet series A,C,E,G,....W,Y */
    //char x;
    printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
    for(x='A'; x<='Y'; x=x+2)
    {
        printf("%c\t", x);
    }

        /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
    //char x;
    printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
    for(x='A'; x<='Z'; x++)
    {
        printf("%d\t", x);
    }

        /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    //char x;
    printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
    for(x='a'; x<='z'; x++)
    {
        printf("%d\t", x);
    }

        /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
    //char x;
    printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    for(x=65; x<=90; x++)
    {
        printf("%c\t", x);
    }


        /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    //char x;
    printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    for(x=97; x<=122; x++)
    {
        printf("%c\t", x);
    }

        /* 19. Display the number series 1,4,9,16,....,81,100 */
    // int i;
    printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i*i);
    }




    return 0;
}





///--------------------------------------------------------------------------------------- /// THE END /// ------------------------------------------------------------------------------///
