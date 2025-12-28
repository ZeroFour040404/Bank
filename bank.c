#include <stdio.h>

float checkBalance(float bal);
float deposit();
float withdraw(float bal);


int main(){
    int choice = 0;
    float bal = 0.0f;

    printf("Welcome to the bank\n\n");

    do{
        printf("Please enter your choice\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\nSelect an option: ");
        scanf("%i", &choice);

        switch(choice){
    case 1:
        checkBalance(bal);
        break;
    case 2:
        bal += deposit();
        printf("Your balance is $%.2f\n", bal);
        break;
    case 3:
        bal -= withdraw(bal);
        printf("Your balance is $%.2f\n", bal);
        break;
    case 4:
        printf("You've exited\nThank you for using the bank.");
        break;    
    default:
        break;
    }

    }while(choice != 4);

    return 0;
}

float checkBalance(float bal){
    printf("Your balance is $%.2f\n", bal);
    return bal;
}

float deposit(){

    float amnt = 0.0f;
    printf("How much would you like to deposit? $");
    scanf("%f", &amnt);

    if (amnt < 0){
        printf("Invalid amount\n");
        return 0.0f;
    } else {
        printf("Successfully deposited $%.2f\n", amnt);
        return amnt;
    }

}

float withdraw(float bal){
    float amnt = 0.0f;
        printf("Available balance: $%.2f\nHow much would you like to withdraw? $", bal);
        scanf("%f", &amnt);

        if (amnt < 0 || amnt > bal){
            printf("Invalid amount\n");
            return 0.0f;
        } else {
            printf("Successfully withdrawn $%.2f\n", amnt);
            return amnt;
    }
}