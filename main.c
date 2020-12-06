#include <stdio.h>
#include "myBank.h"





int main(){
char Action='a';
double Amount;
int acc_num;
int active;
 int rate;







while (Action!='E'){
printf("Please Choose An Action\n O = Opens a new account\n B = Check Balance\n D = Make a Deposit\n W = Make a Withraw\n C = Close your account\n I = Add Interest to all the open accounts\n P = Prints all open accounts and there balance\n E = Exit\n");
printf("\n\n");
scanf("%c" , &Action);

switch (Action)
{
case 'E':
closeProg();
return 0;
    break;

    case 'O':
    if(active == 50){
    printf("Bank capacity is full please try again later\n");
    break;
    }

    else{
        printf("Please enter an amount to deposit :\n");
    scanf("%lf" , &Amount);
    if(Amount>=0){
    acc_num = openAcc(Amount);
    printf("new account has been opened\n");
    active++;
    break;}
    else{
        printf("Amount is invalid Please try again\n");
        break;
    }
}

      case 'B':
    printf("Please enter account number\n");
    scanf("%d" , &acc_num);
    Balance(acc_num);
    break;

    case 'D':
  printf("Please enter an amount to deposit\n");
    scanf("%lf" , &Amount);
    if(Amount>=0){
    Deposit(acc_num , Amount);
    break;
    }
    else {
        printf("Amount is invalid please enter a positive amount\n");
    break;}

    case 'W':
       printf("Please enter account number\n");
    scanf("%d" , &acc_num);


printf("Please enter a withraw amount\n");
    scanf("%lf" , &Amount);

    Withraw(acc_num , Amount);
    break;
    

    case 'C':
       printf("Please enter account number\n");
    scanf("%d" , &acc_num);
    if(acc_num<901 || acc_num>950){
        printf("account number is invalid please try again\n");
        break;
    }


else{
    CloseAcc(acc_num);
    break;}

    case 'I':
    printf("please enter interest rate.\n");
    scanf("%d",&rate);

    if(rate<0){
    printf("rate is under minimal requirement\n");
    break;}

    else{
    addInterest(rate);
    break;
    }

    case 'P':
    PrintBank();
    break;


}

}

 
}

