#include <stdio.h>

int main(void){
    float money=1000.0;
    int choice;
    int a=0;

    while (a != 1){
    

    printf("\n\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("\nChoose an option: ");
    
    if ((scanf("%d", &choice)) != 1){
        printf("\nInvalid input!, please enter a number.\n");

        while (getchar() != '\n');
        continue;
    }

    if (choice!=1 && choice!=2 && choice!=3 && choice!=4)
    {
        printf("Please enter a choice from options!");
        continue;
    }
    

    switch (choice){
        case 1:
        printf("Your balance is: %.2fTL\n", money);
        break;

        case 2:
        float deposit;
        printf("Enter deposit amount: ");
        scanf("%f", &deposit);

        if (deposit > 0){
           money = deposit + money;
        printf("\nDeposit successful!\n");
            continue;
        }else{
            printf("\nEnter a positive number!\n");
        }
        break;

        case 3:
        float with;
        printf("Enter withdrawal amount: ");
        scanf("%f", &with);

        if (with > 0 && with <= money){
            money = money - with;
        printf("\nWithdrawal successful!\n");
            continue;
        }if (with < 0){
            printf("\nEnter a positive number!\n");
            continue;
        }
        else
            printf("\nCheck the budget!\n");
        break;

        case 4:
        a = 1;
        break;
    }
    


}

    return 0;
}