#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int FGPstructure, FGPseq, FGPdec, FGPlo, FGPag, FGPi;
float FGPcel, FGPfah, FGPkel, FGPgwa;
char yesno;

int s();
int d();
int l();
int mainmenu();

//
int calculator()
{
    float f1, f2;
    printf("\nFirst Number: ");
    scanf("%f", &f1);
    printf("Second Number: ");
    scanf("%f", &f2);
    printf("\nAddition: %f", f1 + f2);
    printf("\nSubtraction: %f", f1 - f2);
    printf("\nMultiplication: %f", f1 * f2);
    if (f2 == 0)
        printf("\nDivide: infinity");
    else
        printf("\nDivide: %f", f1 / f2);
    s();
}

int pesoToDollar()
{
    float peso;
    printf("\nMoney (in Peso): ");
    scanf("%f", &peso);
    printf("\nMoney (in Dollar): %f", peso * 0.018);
    s();
}

int kelvin_to_celsius()
{
    printf("\nKelvin: ");
    scanf("%f", &FGPkel);
    FGPcel = FGPkel - 273.15;
    printf("\nCelsius: %.2f", FGPcel);
    s();
}

int electricityBill()
{
    int cur, prev, rate;
    printf("\nPrevious Rating: ");
    scanf("%d", &prev);
    printf("\nCurrent Rating: ");
    scanf("%d", &cur);
    printf("\nUnit Rate: ");
    scanf("%d", &rate);
    printf("\nBill Amount: %d", (cur - prev) * rate);
    s();
}

int sequential()
{
    system("cls");
    printf("\nSEQUENTIAL STRUCTURE");
    printf("\n[1] Calculator");
    printf("\n[2] Peso To Dollar");
    printf("\n[3] Kelvin To Celsius");
    printf("\n[4] Electricity Bill");
    printf("\n\nChoose a Sequential Structure[1-2-3-4]: ");
    scanf("%d", &FGPseq);
    switch (FGPseq)
    {
    case 1:
        calculator();
    case 2:
        pesoToDollar();
    case 3:
        kelvin_to_celsius();
    case 4:
        electricityBill();
    default:
        printf("Invalid Option");
        mainmenu();
    }
}

int legal_or_not()
{
    printf("\nAge: ");
    scanf("%d", &FGPag);
    if (FGPag >= 18)
        printf("Legal Age");
    else
        printf("Not Legal Age");
    d();
}

int grade_rank()
{
    printf("\nGWA: ");
    scanf("%f", &FGPgwa);
    if (FGPgwa <= 60)
        printf("Your Grade is F");
    else if (FGPgwa < 70)
        printf("Your Grade is D");
    else if (FGPgwa < 80)
        printf("Your Grade is C");
    else if (FGPgwa < 90)
        printf("Your Grade is B");
    else
        printf("Your Grade is A");
    d();
}

int what_is_i()
{
    printf("\nEnter an Integer: ");
    scanf("%d", &FGPi);
    if (FGPi == 10)
        printf("FGPi is 10");
    else if (FGPi == 15)
        printf("FGPi is 15");
    else if (FGPi == 20)
        printf("FGPi is 20");
    else
        printf("FGPi is not present");
    d();
}

int i_is_what_than_20()
{
    printf("\nEnter an Integer: ");
    scanf("%d", &FGPi);
    if (FGPi < 20)
    {
        printf("FGPi is less than 20");
    }
    else if (FGPi > 20)
    {
        printf("FGPi is greater than 20");
    }
    d();
}

int decision()
{
    system("cls");
    printf("\nDECISION STRUCTURE");
    printf("\n[1]Age of Legal Majority");
    printf("\n[2]Grade Rank");
    printf("\n[3]What is i");
    printf("\n{4]i is what than 20");
    printf("\nChoose a Decision Structure[1-2-3-4]: ");
    scanf("%d", &FGPdec);
    switch (FGPdec)
    {
    case 1:
        legal_or_not();
    case 2:
        grade_rank();
    case 3:
        what_is_i();
    case 4:
        i_is_what_than_20();
    default:
        printf("Invalid Option");
        mainmenu();
    }
}

int count_1_to_100()
{
    int i = 1;

    while (i <= 100)
    {
        printf("%d, ", i);
        ++i;
    }
    l();
}

int count_1_to_100_backwards()
{
    int i = 100;

    while (i >= 1)
    {
        printf("%d, ", i);
        --i;
    }
    l();
}

int sum_of_n_num()
{
    int num, count, sum = 0;

    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    for (count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);
    l();
}

int add_numbers_until_user_enter_0()
{
    double number, sum = 0;
    do
    {
        printf("\nEnter a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);
    printf("Sum = %.2lf", sum);
    l();
}

int loop()
{
    system("cls");
    printf("\nLOOP STRUCTURE");
    printf("\n[1]Count 1-100");
    printf("\n[2]Count 1-100 Backwards");
    printf("\n[3]Sum of Natural Numbers");
    printf("\n{4]Add Numbers Until You Enter 0");
    printf("\n\nChoose a Loop Structure[1-2-3-4]: ");
    scanf("%d", &FGPlo);
    switch (FGPlo)
    {
    case 1:
        count_1_to_100();
    case 2:
        count_1_to_100_backwards();
    case 3:
        sum_of_n_num();
    case 4:
        add_numbers_until_user_enter_0();
    default:
        printf("Invalid Option");
        mainmenu();
    }
}

int s()
{
    printf("\n\nGo to Sequential Structure?y/n ");
    scanf("%s", &yesno);
    switch (yesno)
    {
    case 'y':
        sequential();
    case 'n':
        mainmenu();
    default:
        printf("Invalid Command");
        s();
    }
}

int d()
{
    printf("\n\nGo to Decision Structure?y/n ");
    scanf("%s", &yesno);
    switch (yesno)
    {
    case 'y':
        decision();
    case 'n':
        mainmenu();
    default:
        printf("Invalid Command");
        d();
    }
}

int l()
{
    printf("\n\nGo to Loop Structure?y/n ");
    scanf("%s", &yesno);
    switch (yesno)
    {
    case 'y':
        loop();
    case 'n':
        mainmenu();
    default:
        printf("Invalid Command");
        l();
    }
}

int main()
{
    system("cls");
    printf("\nPROGRAMMING STRUCTURE");
    printf("\n[1]Sequential Structure");
    printf("\n[2]Decision Structure");
    printf("\n[3]Loop Structure");
    printf("\n\nChoose a Programming Structure[1-2-3]: ");
    scanf("%d", &FGPstructure);
    switch (FGPstructure)
    {
    case 1:
        sequential();
    case 2:
        decision();
    case 3:
        loop();

    default:
        printf("Invalid Option");
        main();
    }

    return 0;
}

int mainmenu()
{
    printf("\n\nGo to PROGRAMMING STRUCTURES?y/n ");
    scanf("%s", &yesno);
    switch (yesno)
    {
    case 'y':
        main();
        system("cls");
    case 'n':
        system("cls");
        printf("Thank you for using the program");
        exit(0);
    default:
        printf("Invalid Command");
        mainmenu();
    }
}
