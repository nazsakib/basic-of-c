/*******************************************************************************************************************************
*                                             Sakib MD Nazmush                                                                 *                                                                                                     *
*                                                                                                                              *                                                                                                                             *
*                                                                                                                              *                                                                                                                             *
*                                  "SWITCH CASE"                                                                               *
*                           From Case (01 to 19) - using for loop                                                              *
*                           From Case (20 to 38) - using while loop                                                            *
*                           From Case (39 to 57) - using do-while loop                                                         *                                                                                                            *
*                                                                                                                              *                                                                                                                             *
*                                                                                                                              *                                                                                                                             *
*******************************************************************************************************************************/



#include<stdio.h>
int main()
{
    int choice;
    int i, n, m;
    char ch, x;
    printf("From 1 - 19 is For Loop.\nFrom 20 - 38 is While Loop.\nFrom 39 - 57 is Do-While Loop.\n\n");
    printf("Enter your Case choice: \n");
    scanf("%d", &choice);

    switch (choice)
    {


// from here for loop starts
    case 1:
        /* 1. Display the number series 1,2,3,4.....n and read the input from user */
        // int i;
        // int m;
        printf("The number series 1,2,3,4 is: ");
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            printf("%d\t", i);
        }
        break;
    case 2:
        /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
        // int i;
        // int m;
        printf("\n\nThe number series m, m-1, m-2 is: \n");
        printf("Program 2> Please enter the value of m: ");
        scanf("%d", &m);
        for(i=m; i>=1; i=i-1)
        {
            printf("\n%d\t", i);
        }
        break;
    case 3:
        /* 3. Display the name 10 times using for loop */
        // int i;
        // char ch;
        printf("\n\nDisplaying the name 10 times: \n");
        printf("Program 03> Display the name 10 times: \n");
        scanf("%c", &ch);
        for(i=1; i<=10; i++)
        {
            printf("SAKIB MD NAZMUSH\n");
        }
        break;
    case 4:

        /* 4. Display the number series 1,2,3,4,....9,10. */
        // int i;
        printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
        for(i=1; i<=10; i++)
        {
            printf("%d\t", i);
        }
        break;
    case 5:
        /* 5. Display the number series 1,3,5,7,9 */
        // int = i;
        printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
        for(i=1; i<=9; i=i+2)
        {
            printf("%d\t", i);
        }
        break;
    case 6:
        /* 6. Display the number series 2,4,6,8,10 */
        // int i;
        printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
        for(i=2; i<=10; i=i+2)
        {
            printf("%d\t", i);
        }
        break;
    case 7:
        /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
        // int i;
        printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
        for(i=5; i<=50; i=i+5)
        {
            printf("%d\t", i);
        }
        break;
    case 8:
        /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
        // int i;
        printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
        for(i=10; i>=1; i--)
        {
            printf("%d\t", i);
        }
        break;
    case 9:
        /* 9. Display the number series 10,8,6,4,2 */
        // int i;
        printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
        for(i=10; i>=1; i=i-2)
        {
            printf("%d\t", i);
        }
        break;
    case 10:
        /* 10. Display the number series 9,7,5,3,1 */
        // int i;
        printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
        for(i=9; i>=1; i=i-2)
        {
            printf("%d\t", i);
        }
        break;
    case 11:
        /* 11. Display the number series 1,3,5 */
        // int i;
        printf("\n\nProgram 11> Display the number series 1,3,5: \n");
        for(i=1; i<=5; i=i+2)
        {
            printf("%d\t", i);
        }
        break;
    case 12:
        /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
        // char x;
        printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
        for(x='A'; x<='Z'; x++)
        {
            printf("%c\t", x);
        }
        break;
    case 13:
        /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
        //char x;
        printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
        for(x='a'; x<='z'; x++)
        {
            printf("%c\t", x);
        }
        break;
    case 14:
        /* 14. Display the alphabet series A,C,E,G,....W,Y */
        //char x;
        printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
        for(x='A'; x<='Y'; x=x+2)
        {
            printf("%c\t", x);
        }
        break;
    case 15:
        /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
        for(x='A'; x<='Z'; x++)
        {
            printf("%d\t", x);
        }
        break;
    case 16:
        /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
        for(x='a'; x<='z'; x++)
        {
            printf("%d\t", x);
        }
        break;
    case 17:
        /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        for(x=65; x<=90; x++)
        {
            printf("%c\t", x);
        }
        break;
    case 18:
        /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        for(x=97; x<=122; x++)
        {
            printf("%c\t", x);
        }
        break;
    case 19:
        /* 19. Display the number series 1,4,9,16,....,81,100 */
        // int i;
        printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
        for(i=1; i<=10; i++)
        {
            printf("%d\t", i*i);
        }
        break;
// Here using for loop ends


// from here while loop starts
    case 20:
        /* 1. Display the number series 1,2,3,4.....n and read the input from user */
        // int i;
        // int n;
        printf("The number series 1,2,3,4 is: \n");
        printf("Program 1> Please enter the value of n: ");
        scanf("%d", &n);
        i = 1;
        while(i <= n)
        {
            printf("\n%d", i);
            i++;
        }
        break;
    case 21:
        /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
        // int i;
        // int m;
        printf("\n\nThe number series m, m-1, m-2 is: \n");
        printf("Program 2> Please enter the value of m: ");
        scanf("%d", &m);
        i = m;
        while(i >= 1)
        {
            printf("%d\n", i);
            i = i-1;
        }
        break;
    case 22:
        /* 3. Display the name 10 times using for loop */
        // int i;
        // char ch;
        printf("\n\nDisplaying the name 10 times: \n");
        printf("Program 03> Display the name 10 times: \n");
        scanf("%c", &ch);
        i = 1;
        while(i <= 10)
        {
            printf("Sakib MD Nazmush\n");
            i++;
        }
        break;
    case 23:
        /* 4. Display the number series 1,2,3,4,....9,10. */
        // int i;
        printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
        i = 1;
        while(i <= 10)
        {
            printf("%d\n", i);
            i++;
        }
        break;
    case 24:
        /* 5. Display the number series 1,3,5,7,9 */
        // int = i;
        printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
        i = 1;
        while(i <= 9)
        {
            printf("%d\n", i);
            i = i + 2;
        }
        break;
    case 25:
        /* 6. Display the number series 2,4,6,8,10 */
        // int i;
        printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
        i = 2;
        while(i <= 10)
        {
            printf("%d\n", i);
            i = i + 2;
        }
        break;
    case 26:
        /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
        // int i;
        printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
        i = 5;
        while(i <= 50)
        {
            printf("%d\n", i);
            i = i + 5;
        }
        break;
    case 27:
        /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
        // int i;
        printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
        i = 10;
        while(i >= 1)
        {
            printf("%d\n", i);
            i--;
        }
        break;
    case 28:
        /* 9. Display the number series 10,8,6,4,2 */
        // int i;
        printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
        i = 10;
        while(i >= 1)
        {
            printf("%d\n", i);
            i = i - 2;
        }
        break;
    case 29:
        /* 10. Display the number series 9,7,5,3,1 */
        // int i;
        printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
        i = 9;
        while(i >= 1)
        {
            printf("%d\n", i);
            i = i -2;
        }
        break;
    case 30:
        /* 11. Display the number series 1,3,5 */
        // int i;
        printf("\n\nProgram 11> Display the number series 1,3,5: \n");
        i = 1;
        while(i <= 5)
        {
            printf("%d\n", i);
            i = i + 2;
        }
        break;
    case 31:
        /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
        // char x;
        printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
        x = 'A';
        while(x <= 'Z')
        {
            printf("%c\t", x);
            x++;
        }

        break;
    case 32:
        /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
        //char x;
        printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
        x = 'a';
        while(x <= 'z')
        {
            printf("%c\t", x);
            x++;
        }
        break;
    case 33:
        /* 14. Display the alphabet series A,C,E,G,....W,Y */
        //char x;
        printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
        x = 'A';
        while(x <= 'Y')
        {
            printf("%c\t", x);
            x = x + 2;
        }
        break;
    case 34:
        /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
        x = 'A';
        while(x <= 'Z')
        {
            printf("%d\t", x);
            x++;
        }

        break;
    case 35:
        /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
        x = 'a';
        while(x <= 'z')
        {
            printf("%d\t", x);
            x++;
        }
        break;
    case 36:
        /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        x = 65;
        while(x <= 90)
        {
            printf("%c\t", x);
            x++;
        }
        break;
    case 37:

        /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        x = 97;
        while(x <= 122)
        {
            printf("%c\t", x);
            x++;
        }
        break;
    case 38:
        /* 19. Display the number series 1,4,9,16,....,81,100 */
        // int i;
        printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
        i = 1;
        while(i <= 10)
        {
            printf("%d\t", i*i);
            i++;
        }
        break;
// here while loop ends



// from here do-while loop starts
    case 39:
        /* 1. Display the number series 1,2,3,4.....n and read the input from user */
        // int i;
        // int n;
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
        break;
    case 40:
        /* 2. Display the number series m, m-1, m-2, m-3, m-4,....,2,1 and read the input from user */
        // int i;
        // int m;
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
        break;
    case 41:
        /* 3. Display the name 10 times using for loop */
        // int i;
        // char ch;
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
        break;
    case 42:
        /* 4. Display the number series 1,2,3,4,....9,10. */
        // int i;
        printf("\n\nProgram 04> Display the number series 1,2,3,4,.....,9,10: \n");
        i = 1;
        do
        {
            printf("%d\n", i);
            i++;
        }
        while(i <= 10);
        break;
    case 43:
        /* 5. Display the number series 1,3,5,7,9 */
        // int = i;
        printf("\n\nProgram 05> Display the number series 1,3,5,7,9: \n");
        i = 1;
        do
        {
            printf("%d\n", i);
            i = i + 2;
        }
        while(i <= 9);
        break;
    case 44:
        /* 6. Display the number series 2,4,6,8,10 */
        // int i;
        printf("\n\nProgram 06> Display the number series 2,4,6,8,10: \n");
        i = 2;
        do
        {
            printf("%d\n", i);
            i = i + 2;
        }
        while(i <= 10);
        break;
    case 45:
        /* 7. Display the number series 5,10,15,20,25,30,35,40,45,50 */
        // int i;
        printf("\n\nProgram 07> Display the number series 5,10,15,20,25,30,35,40,45,50: \n");
        i = 5;
        do
        {
            printf("%d\n", i);
            i = i + 5;
        }
        while(i <= 50);
        break;
    case 46:
        /* 8. Display the number series 10,9,8,7,6,5,4,3,2,1 */
        // int i;
        printf("\n\nProgram 08> Display the number series 10,9,8,7,6,5,4,3,2,1: \n");
        i = 10;
        do
        {
            printf("%d\n", i);
            i--;
        }
        while(i >= 1);
        break;
    case 47:
        /* 9. Display the number series 10,8,6,4,2 */
        // int i;
        printf("\n\nProgram 09> Display the number series 10,8,6,4,2: \n");
        i = 10;
        do
        {
            printf("%d\n", i);
            i = i - 2;
        }
        while(i >= 1);
        break;
    case 48:
        /* 10. Display the number series 9,7,5,3,1 */
        // int i;
        printf("\n\nProgram 10> Display the number series 9,7,5,3,1: \n");
        i = 9;
        do
        {
            printf("%d\n", i);
            i = i -2;
        }
        while(i >= 1);
        break;
    case 49:
        /* 11. Display the number series 1,3,5 */
        // int i;
        printf("\n\nProgram 11> Display the number series 1,3,5: \n");
        i = 1;
        do
        {
            printf("%d\n", i);
            i = i + 2;
        }
        while(i <= 5);
        break;
    case 50:
        /* 12. Display the UPPER CASE A,B,C,D,..,Y,Z */
        // char x;
        printf("\n\nProgram 12> Display the UPPER CASE alphabet: \n");
        x = 'A';
        do
        {
            printf("%c\t", x);
            x++;
        }
        while(x <= 'Z');
        break;
    case 51:
        /* 13. Display the LOWER CASE a,b,c,d,e,....,y,z */
        //char x;
        printf("\n\nProgram 13> Display the LOWER CASE alphabet: \n");
        x = 'a';
        do
        {
            printf("%c\t", x);
            x++;
        }
        while(x <= 'z');
        break;
    case 52:
        /* 14. Display the alphabet series A,C,E,G,....W,Y */
        //char x;
        printf("\n\nProgram 14> Display the alphabet series A,C,E,G,....W,Y: \n");
        x = 'A';
        do
        {
            printf("%c\t", x);
            x = x + 2;
        }
        while(x <= 'Y');
        break;
    case 53:
        /* 15. Display CHARACTER TO INTEGER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 15> Display CHARACTER TO INTEGER using ASCII code for UPPER CASE: \n");
        x = 'A';
        do
        {
            printf("%d\t", x);
            x++;
        }
        while(x <= 'Z');
        break;
    case 54:
        /* 16. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 16> Display CHARACTER TO INTEGER using ASCII code for LOWER CASE: \n");
        x = 'a';
        do
        {
            printf("%d\t", x);
            x++;
        }
        while(x <= 'z');
        break;
    case 55:
        /* 17. Display INTEGER TO CHARACTER using ASCII code for UPPER CASE */
        //char x;
        printf("\n\nProgram 17> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        x = 65;
        do
        {
            printf("%c\t", x);
            x++;
        }
        while(x <= 90);
        break;
    case 56:
        /* 18. Display CHARACTER TO INTEGER using ASCII code for LOWER CASE */
        //char x;
        printf("\n\nProgram 18> Display INTEGER TO CHARACTER using ASCII code for UPPER CASE: \n");
        x = 97;
        do
        {
            printf("%c\t", x);
            x++;
        }
        while(x <= 122);
        break;
    case 57:
        /* 19. Display the number series 1,4,9,16,....,81,100 */
        // int i;
        printf("\n\nProgram 19> Display the number series 1,4,9,16,....,81,100: \n");
        i = 1;
        do
        {
            printf("%d\t", i*i);
            i++;
        }
        while(i <= 10);
        break;
// here do-while loop ends
        default:
        printf("\n\nInvalid option!\n\n");
    }
    return 0;
}





///--------------------------------------------------------------------------------------- /// THE END /// ------------------------------------------------------------------------------///
