/******************************************************************************************************************************
*                                              Sakib MD Nazmush                                                               *                                                                                                      *
*                                                                                                                             *                                                                                                                              *
*                                                                                                                             *                                                                                                                              *
*                                  "FUNCTION"                                                                                 *                                                                                                                *
*                                                                                                                             *                                                                                                                              *
*                                                                                                                             *                                                                                                                             *
*******************************************************************************************************************************/

#include<stdio.h>
/// for loop functions DECLARATIONS starts
void for_loop1();
void for_loop2();
void for_loop3();
void for_loop4();
void for_loop5();
void for_loop6();
void for_loop7();
void for_loop8();
void for_loop9();
void for_loop10();
void for_loop11();
void for_loop12();
void for_loop13();
void for_loop14();
void for_loop15();
void for_loop16();
void for_loop17();
void for_loop18();
void for_loop19();
/// for loop ends



/// while loop functions DECLARATIONS starts
void while_loop1();
void while_loop2();
void while_loop3();
void while_loop4();
void while_loop5();
void while_loop6();
void while_loop7();
void while_loop8();
void while_loop9();
void while_loop10();
void while_loop11();
void while_loop12();
void while_loop13();
void while_loop14();
void while_loop15();
void while_loop16();
void while_loop17();
void while_loop18();
void while_loop19();
/// while loop ends



/// do while loop functions DECLARATIONS starts
void do_while_loop1();
void do_while_loop2();
void do_while_loop3();
void do_while_loop4();
void do_while_loop5();
void do_while_loop6();
void do_while_loop7();
void do_while_loop8();
void do_while_loop9();
void do_while_loop10();
void do_while_loop11();
void do_while_loop12();
void do_while_loop13();
void do_while_loop14();
void do_while_loop15();
void do_while_loop16();
void do_while_loop17();
void do_while_loop18();
void do_while_loop19();
// do while loop ends



int main()
{

/// function calling for for loop
    printf("--------------------------------------");
    printf("\nFOR-LOOP starting:- \n");
    printf("--------------------------------------\n\n\n");
    for_loop1();
    printf("\n------------------\n");

    for_loop2();
    printf("\n------------------\n");

    for_loop3();
    printf("\n------------------\n");

    for_loop4();
    printf("\n------------------\n");

    for_loop5();
    printf("\n------------------\n");

    for_loop6();
    printf("\n------------------\n");

    for_loop7();
    printf("\n------------------\n");

    for_loop8();
    printf("\n------------------\n");

    for_loop9();
    printf("\n------------------\n");

    for_loop10();
    printf("\n------------------\n");

    for_loop11();
    printf("\n------------------\n");

    for_loop12();
    printf("\n------------------\n");

    for_loop13();
    printf("\n------------------\n");

    for_loop14();
    printf("\n------------------\n");

    for_loop15();
    printf("\n------------------\n");

    for_loop16();
    printf("\n------------------\n");

    for_loop17();
    printf("\n------------------\n");

    for_loop18();
    printf("\n------------------\n");

    for_loop19();
    printf("\n------------------\n");



/// function calling while
    printf("\n\n\n--------------------------------------");
    printf("\nWHILE-LOOP starting:- \n");
    printf("--------------------------------------\n\n\n");
    while_loop1();
    printf("\n------------------\n");

    while_loop2();
    printf("\n------------------\n");

    while_loop3();
    printf("\n------------------\n");

    while_loop4();
    printf("\n------------------\n");

    while_loop5();
    printf("\n------------------\n");

    while_loop6();
    printf("\n------------------\n");

    while_loop7();
    printf("\n------------------\n");

    while_loop8();
    printf("\n------------------\n");

    while_loop9();
    printf("\n------------------\n");

    while_loop10();
    printf("\n------------------\n");

    while_loop11();
    printf("\n------------------\n");

    while_loop12();
    printf("\n------------------\n");

    while_loop13();
    printf("\n------------------\n");

    while_loop14();
    printf("\n------------------\n");

    while_loop15();
    printf("\n------------------\n");

    while_loop16();
    printf("\n------------------\n");

    while_loop17();
    printf("\n------------------\n");

    while_loop18();
    printf("\n------------------\n");

    while_loop19();
    printf("\n------------------\n");



/// function calling do while loop
    printf("\n\n\n--------------------------------------");
    printf("\nDO-WHILE-LOOP starting:- \n");
    printf("--------------------------------------\n\n\n");
    do_while_loop1();
    printf("\n------------------\n");

    do_while_loop2();
    printf("\n------------------\n");

    do_while_loop3();
    printf("\n------------------\n");

    do_while_loop4();
    printf("\n------------------\n");

    do_while_loop5();
    printf("\n------------------\n");

    do_while_loop6();
    printf("\n------------------\n");

    do_while_loop7();
    printf("\n------------------\n");

    do_while_loop8();
    printf("\n------------------\n");

    do_while_loop9();
    printf("\n------------------\n");

    do_while_loop10();
    printf("\n------------------\n");

    do_while_loop11();
    printf("\n------------------\n");

    do_while_loop12();
    printf("\n------------------\n");

    do_while_loop13();
    printf("\n------------------\n");

    do_while_loop14();
    printf("\n------------------\n");

    do_while_loop15();
    printf("\n------------------\n");

    do_while_loop16();
    printf("\n------------------\n");

    do_while_loop17();
    printf("\n------------------\n");

    do_while_loop18();
    printf("\n------------------\n");

    do_while_loop19();
    printf("\n------------------\n");

    return 0;

}



/// function definitions for loop
void for_loop1()
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

}
void for_loop2()
{
    /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
    int i;
    int m;
    printf("\n\nThe number series m, m-1, m-2 is: \n");
    printf("Program 2> Please enter the value of m: ");
    scanf("%d", &m);
    for(i=m; i>=1; i=i-1)
    {
        printf("\n%d\t", i);
    }
}
void for_loop3()
{
    /* 3. Display the name 10 times using for loop */
    int i;
    char ch;
    printf("\n\nDisplaying the name 10 times: \n");
    printf("Program 03> Display the name 10 times: \n");
    scanf("%c", &ch);
    for(i=1; i<=10; i++)
    {
        printf("SAKIB MD NAZMUSH\n");
    }
}
void for_loop4()
{
    /* 4. Display the number series 1,2,3,4,....9,10. */
    int i;
    printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i);
    }
}
void for_loop5()
{
    /* 5. Display the number series 1,3,5,7,9 */
    int i;
    printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
    for(i=1; i<=9; i=i+2)
    {
        printf("%d\t", i);
    }
}
void for_loop6()
{
    /* 6. Display the number series 2,4,6,8,10 */
    int i;
    printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
    for(i=2; i<=10; i=i+2)
    {
        printf("%d\t", i);
    }
}
void for_loop7()
{
    /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
    int i;
    printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
    for(i=5; i<=50; i=i+5)
    {
        printf("%d\t", i);
    }
}
void for_loop8()
{
    /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
    int i;
    printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
    for(i=10; i>=1; i--)
    {
        printf("%d\t", i);
    }
}
void for_loop9()
{
    /* 9. Display the number series 10,8,6,4,2 */
    int i;
    printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
    for(i=10; i>=1; i=i-2)
    {
        printf("%d\t", i);
    }
}
void for_loop10()
{
    /* 10. Display the number series 9,7,5,3,1 */
    int i;
    printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
    for(i=9; i>=1; i=i-2)
    {
        printf("%d\t", i);
    }
}
void for_loop11()
{
    /* 11. Display the number series 1,3,5 */
    int i;
    printf("\n\nProgram 11> Display the number series 1,3,5: \n");
    for(i=1; i<=5; i=i+2)
    {
        printf("%d\t", i);
    }
}
void for_loop12()
{
    /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
    char x;
    printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
    for(x='A'; x<='Z'; x++)
    {
        printf("%c\t", x);
    }
}
void for_loop13()
{
    /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
    char x;
    printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
    for(x='a'; x<='z'; x++)
    {
        printf("%c\t", x);
    }
}
void for_loop14()
{
    /* 14. Display the alphabet series A,C,E,G,....W,Y */
    char x;
    printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
    for(x='A'; x<='Y'; x=x+2)
    {
        printf("%c\t", x);
    }
}
void for_loop15()
{
    /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
    for(x='A'; x<='Z'; x++)
    {
        printf("%d\t", x);
    }
}
void for_loop16()
{
    /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
    for(x='a'; x<='z'; x++)
    {
        printf("%d\t", x);
    }
}
void for_loop17()
{
    /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    for(x=65; x<=90; x++)
    {
        printf("%c\t", x);
    }
}
void for_loop18()
{
    /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    for(x=97; x<=122; x++)
    {
        printf("%c\t", x);
    }
}
void for_loop19()
{
    /* 19. Display the number series 1,4,9,16,....,81,100 */
    int i;
    printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i*i);
    }
}



///function definitions while loop
void while_loop1()
{
    /* 1. Display the number series 1,2,3,4.....n and read the input from user */
    int i;
    int n;
    printf("The number series 1,2,3,4 is: \n");
    printf("Program 1> Please enter the value of n: ");
    scanf("%d", &n);
    i = 1;
    while(i <= n)
    {
        printf("\n%d", i);
        i++;
    }
}
void while_loop2()
{
    /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
    int i;
    int m;
    printf("\n\nThe number series m, m-1, m-2 is: \n");
    printf("Program 2> Please enter the value of m: ");
    scanf("%d", &m);
    i = m;
    while(i >= 1)
    {
        printf("%d\n", i);
        i = i-1;
    }
}
void while_loop3()
{
    /* 3. Display the name 10 times using for loop */
    int i;
    char ch;
    printf("\n\nDisplaying the name 10 times: \n");
    printf("Program 03> Display the name 10 times: \n");
    scanf("%c", &ch);
    i = 1;
    while(i <= 10)
    {
        printf("Sakib MD Nazmush\n");
        i++;
    }
}
void while_loop4()
{
    /* 4. Display the number series 1,2,3,4,....9,10. */
    int i;
    printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
    i = 1;
    while(i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
}
void while_loop5()
{
    /* 5. Display the number series 1,3,5,7,9 */
    int i;
    printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
    i = 1;
    while(i <= 9)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}
void while_loop6()
{
    /* 6. Display the number series 2,4,6,8,10 */
    int i;
    printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
    i = 2;
    while(i <= 10)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}
void while_loop7()
{
    /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
    int i;
    printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
    i = 5;
    while(i <= 50)
    {
        printf("%d\n", i);
        i = i + 5;
    }
}
void while_loop8()
{
    /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
    int i;
    printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
    i = 10;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}
void while_loop9()
{
    /* 9. Display the number series 10,8,6,4,2 */
    int i;
    printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
    i = 10;
    while(i >= 1)
    {
        printf("%d\n", i);
        i = i - 2;
    }
}
void while_loop10()
{
    /* 10. Display the number series 9,7,5,3,1 */
    int i;
    printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
    i = 9;
    while(i >= 1)
    {
        printf("%d\n", i);
        i = i -2;
    }
}
void while_loop11()
{
    /* 11. Display the number series 1,3,5 */
    int i;
    printf("\n\nProgram 11> Display the number series 1,3,5: \n");
    i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}
void while_loop12()
{
    /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
    char x;
    printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
    x = 'A';
    while(x <= 'Z')
    {
        printf("%c\t", x);
        x++;
    }
}
void while_loop13()
{
    /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
    char x;
    printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
    x = 'a';
    while(x <= 'z')
    {
        printf("%c\t", x);
        x++;
    }
}
void while_loop14()
{
    /* 14. Display the alphabet series A,C,E,G,....W,Y */
    char x;
    printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
    x = 'A';
    while(x <= 'Y')
    {
        printf("%c\t", x);
        x = x + 2;
    }
}
void while_loop15()
{
    /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
    x = 'A';
    while(x <= 'Z')
    {
        printf("%d\t", x);
        x++;
    }
}
void while_loop16()
{
    /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
    x = 'a';
    while(x <= 'z')
    {
        printf("%d\t", x);
        x++;
    }
}
void while_loop17()
{
    /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 65;
    while(x <= 90)
    {
        printf("%c\t", x);
        x++;
    }
}
void while_loop18()
{
    /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 97;
    while(x <= 122)
    {
        printf("%c\t", x);
        x++;
    }
}
void while_loop19()
{
    /* 19. Display the number series 1,4,9,16,....,81,100 */
    int i;
    printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
    i = 1;
    while(i <= 10)
    {
        printf("%d\t", i*i);
        i++;
    }
}



/// function definitions do while loop
void do_while_loop1()
{
    /* 1. Display the number series 1,2,3,4.....n and read the input from user */
    int i;
    int n;
    printf("The number series 1,2,3,4 is: \n");
    printf("Program 1> Please enter the value of n: ");
    scanf("%d", &n);
    i = 1;
    do
    {
        printf("%d\t", i);
        i++;
    }
    while(i <= n);
}
void do_while_loop2()
{
    /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
    int i;
    int m;
    printf("\n\nThe number series m, m-1, m-2 is: \n");
    printf("Program 2> Please enter the value of m: ");
    scanf("%d", &m);
    i = m;
    do
    {
        printf("%d\n", i);
        i = i-1;
    }
    while(i >= 1);
}
void do_while_loop3()
{
    /* 3. Display the name 10 times using for loop */
    int i;
    char ch;
    printf("\n\nDisplaying the name 10 times: \n");
    printf("Program 03> Display the name 10 times: \n");
    scanf("%c", &ch);
    i = 1;
    do
    {
        printf("Sakib MD Nazmush\n");
        i++;
    }
    while(i <= 10);
}
void do_while_loop4()
{
    /* 4. Display the number series 1,2,3,4,....9,10. */
    int i;
    printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= 10);
}
void do_while_loop5()
{
    /* 5. Display the number series 1,3,5,7,9 */
    int i;
    printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 2;
    }
    while(i <= 9);
}
void do_while_loop6()
{
    /* 6. Display the number series 2,4,6,8,10 */
    int i;
    printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
    i = 2;
    do
    {
        printf("%d\n", i);
        i = i + 2;
    }
    while(i <= 10);
}
void do_while_loop7()
{
    /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
    int i;
    printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
    i = 5;
    do
    {
        printf("%d\n", i);
        i = i + 5;
    }
    while(i <= 50);
}
void do_while_loop8()
{
    /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
    int i;
    printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
    i = 10;
    do
    {
        printf("%d\n", i);
        i--;
    }
    while(i >= 1);
}
void do_while_loop9()
{
    /* 9. Display the number series 10,8,6,4,2 */
    int i;
    printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
    i = 10;
    do
    {
        printf("%d\n", i);
        i = i - 2;
    }
    while(i >= 1);
}
void do_while_loop10()
{
    /* 10. Display the number series 9,7,5,3,1 */
    int i;
    printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
    i = 9;
    do
    {
        printf("%d\n", i);
        i = i -2;
    }
    while(i >= 1);
}
void do_while_loop11()
{
    /* 11. Display the number series 1,3,5 */
    int i;
    printf("\n\nProgram 11> Display the number series 1,3,5: \n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 2;
    }
    while(i <= 5);
}
void do_while_loop12()
{
    /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
    char x;
    printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
    x = 'A';
    do
    {
        printf("%c\t", x);
        x++;
    }
    while(x <= 'Z');
}
void do_while_loop13()
{
    /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
    char x;
    printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
    x = 'a';
    do
    {
        printf("%c\t", x);
        x++;
    }
    while(x <= 'z');
}
void do_while_loop14()
{
    /* 14. Display the alphabet series A,C,E,G,....W,Y */
    char x;
    printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
    x = 'A';
    do
    {
        printf("%c\t", x);
        x = x + 2;
    }
    while(x <= 'Y');
}
void do_while_loop15()
{
    /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
    x = 'A';
    do
    {
        printf("%d\t", x);
        x++;
    }
    while(x <= 'Z');
}
void do_while_loop16()
{
    /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
    x = 'a';
    do
    {
        printf("%d\t", x);
        x++;
    }
    while(x <= 'z');
}
void do_while_loop17()
{
    /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
    char x;
    printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 65;
    do
    {
        printf("%c\t", x);
        x++;
    }
    while(x <= 90);
}
void do_while_loop18()
{
    /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
    char x;
    printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
    x = 97;
    do
    {
        printf("%c\t", x);
        x++;
    }
    while(x <= 122);
}
void do_while_loop19()
{
    /* 19. Display the number series 1,4,9,16,....,81,100 */
    int i;
    printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
    i = 1;
    do
    {
        printf("%d\t", i*i);
        i++;
    }
    while(i <= 10);
}




///--------------------------------------------------------------------------------------- /// THE END /// ------------------------------------------------------------------------------///
