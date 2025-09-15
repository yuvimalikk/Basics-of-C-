// Power Supply company need to generate electricity comsumption bill. There are two type of customers, one is domestic and another is commercial. Rate per unit for user is Rs 8.00 and Rs 500 meter rent chargers with include sub-charges if total bill exceeds 10000. And Rate per unit for user commercial user is Rs 15 and Rs 2000 meter rent changes with include sub-charges if total bill exceeds Rs 50000. Note - The sub-charges value is 10% of the total bill.

#include<stdio.h>
#include<math.h>

int main() {
    int choice;
    float previousReading, currentReading, reading, amount;

    printf("\nElectricity Comsumption Bill\n");

    do {
        printf("\nMenu :\n");
        printf("1. Domestic User\n");
        printf("2. Commercial User\n");
        printf("3. To Close the application.\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter the pervious meter reading : ");
                scanf("%f", &previousReading);
                printf("Enter the current meter reading : ");
                scanf("%f", &currentReading);
                reading = previousReading - currentReading;
                amount = (reading*8) + 500;

                if(amount >= 10000) {
                    printf("Amount : %f", amount);
                    amount = amount + ((amount * 10)/100);
                    printf("\nYou have to pay Rs. %f \n", amount);
                }

                else {
                    printf("\nYou have to pay Rs. %f \n", amount);
                }

                break;

            case 2:
                printf("\nEnter the pervious meter reading : ");
                scanf("%f", &previousReading);
                printf("Enter the current meter reading : ");
                scanf("%f", &currentReading);
                reading = previousReading - currentReading;
                amount = (reading*15) + 2000;

                if(amount >= 50000) {
                    printf("Amount : %f", amount);
                    amount = amount + ((amount * 10)/100);
                    printf("\nYou have to pay Rs. %f \n", amount);
                }

                else {
                    printf("\nYou have to pay Rs. %f \n", amount);
                }

                break;

            case 3:
                printf("\nThank you for using the electricity comsumption bill Code !\n- Goodbye!\n");
                break;

            default:
                printf("Invalid selection. Kindly choose a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
