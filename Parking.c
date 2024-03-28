/*
Project By: KARTIK KUMAR
USN: 1CD22CS061
Sub: Prinncipal of programing using C.
*/
// WITH CLEAR SCREEN
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int Menu();
void Bus();
void Car();
void Riksha();
void cycle();
void ShowDetail();
void Delete();
void bill();
int res();
int nob = 0, noCar = 0, nor = 0, nocy = 0, total = 0, amount = 0;

int main()
{
    printf("\nWelcome to CITECH Parking.\n");
    printf("-------------------------");
    printf("\nHere is your Parking charges and Menu:-\n");
    printf("1.For Bus-          100/-\n");
    printf("2.For Car-          80/-\n");
    printf("3.For Rickshaw-       40/-\n");
    printf("4.For Cycle-        20/-\n\n");

    do
    { // clrscr();
        switch (Menu())
        {
        case 1:
            Bus();
            break;
        case 2:
            Car();
            break;
        case 3:
            Riksha();
            break;
        case 4:
            cycle();
            break;
        case 5:
            ShowDetail();
            break;
        case 6:
            Delete();
            break;
        case 7:
            bill();
            printf("\nThank You for using CITECH parking.");
            exit(0);
        default:
            printf("You have entered a invalid choice.");
        }
    } while (res());
    return 0;
}

int Menu()
{
    int choice;
    printf("\n\nPLEASE SELECT:");
    printf("\n1-> For BUS entry.");
    printf("\n2-> For CAR entry.");
    printf("\n3-> For RICKSHAW entry.");
    printf("\n4-> For CYCLE entry.");
    printf("\n5-> To see the details of Parking.");
    printf("\n6-> To delete the whole data.");
    printf("\n7-> exit.");
    printf("\n\nEnter your choise: ");
    scanf("%d", &choice);
    return (choice);
}
void Bus()
{
    nob++;
    total++;
    amount += 100;
    printf("Bus entry successful.");
}
void Car()
{
    noCar++;
    total++;
    amount += 80;
    printf("Car entry successful.");
}
void Riksha()
{
    nor++;
    total++;
    amount += 40;
    printf("Rickshaw entry successful.");
}
void cycle()
{
    nocy++;
    total++;
    amount += 20;
    printf("Cycle entry successful.");
}
void ShowDetail()
{
    printf("\nDETAIL OF ALL THE VEHICLES IN THE PARKING:\n");
    printf("------------------------------------------\n");
    printf("\nTotal number of Buses:      %d", nob);
    printf("\nTotal number of Cars:       %d", noCar);
    printf("\nTotal number of Rickshaws:  %d", nor);
    printf("\nTotal number of Cycles:     %d", nocy);
    printf("\nTotal number of vechicle:   %d", total);
    printf("\nTotal amount gained:        %d", amount);
}
void Delete()
{
    nob = 0;
    noCar = 0;
    nor = 0;
    nocy = 0;
    amount = 0;
    total = 0;
    printf("All Data is Cleared.");
}
void bill()
{
    printf("\n_____________BILL____________");
    printf("\nYour total amount is : %d.00", amount);
}
int res()
{
    int responce;
    printf("\n\n\nDo you want to continue with services from CITECH Parking");
    printf("\n1.) To Continue: press '1'");
    printf("\n2.) To Stop:     press '2'");
    printf("\n\nPlease enter your choice('1' or '2'): ");
    scanf("%d", &responce);
    if (responce == 1)
    {
        return responce;
    }
    else
    {
        bill();
        printf("\nThank You for using CITECH parking.");
        exit(0);
    }
}