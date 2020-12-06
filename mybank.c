#include <stdio.h>
#include "mybank.h"

#define NumOfAcc 50
#define key 901

double Bank[50][2] = {0};
int acc_num = 0;


int openAcc(double Amount){
    for (int i = 0; i < NumOfAcc ; i++){
if (Bank[i][0]!=1) 
{
    Bank[i][0]=1;
    Bank[i][1]=Amount;
    acc_num = key+i;
    printf("Your account number is %d\n",acc_num);
    return acc_num;
}
    }
    return 0;

}



void Balance(int acc_num){
    if(Bank[acc_num-key][0]==1){
        printf("%.2f\n" , Bank[acc_num-key][1]);
    }

return;
}

void Deposit(int acc_num , double Amount){
       if(Bank[acc_num-key][0]!=1){
          printf("This Account is closed.\n");
          return;
      }

      else{
          Bank[acc_num-key][1]+=Amount;
          printf("Deposit process has been completed succesfully\n");
          printf("New balance = %.2f\n" ,Bank[acc_num-key][1]);
          return;
      }
}

    void Withraw(int acc_num , double Amount){
         if(Bank[acc_num-key][0]==1 && Bank[acc_num-key][1]>=Amount){
             Bank[acc_num-key][1]-=Amount;
             printf("%f" , Bank[acc_num-key][1]);
             return;
         }
         else
         {
             if(Bank[acc_num-key][0]!=1){
             printf("this account is closed.\n\n");
             return;
             }
if(Bank[acc_num-key][1]<Amount){
    printf("Balance is insufficient.\n\n");
    return;
    }
         }
         
        return;
    }


 void CloseAcc(int acc_num){
        if(Bank[acc_num-key][0]==1){
        Bank[acc_num-key][0]=0;
        Bank[acc_num-key][1]=0;
        printf("This Account is now closed.\n\n");
        return;
    }

    else
    {
        printf("Account is Already Closed.\n\n");
        return;
    }
    }

   void addInterest(int rate){
        for (int i = 0; i < NumOfAcc; i++)
        {
            if(Bank[i][0]==1){
                double interest = (double)rate/100*Bank[i][1];
                Bank[i][1]+=interest;
                }
        }
        
        return;
        
    }

   void PrintBank(){
        
        for(int i = 0 ; i<NumOfAcc ; i++){
            acc_num=key+i;
            if(Bank[i][0]==1){
                printf("Account number = %d , Condition = Active , Balance = %.2f\n" , acc_num , Bank[i][1]);
            }
            else
            {
                printf("Account number = %d , Condition = Closed , Balance = %.2f\n" , acc_num , Bank[i][1]);
            }
            
        }
        return;
    }

   void closeProg(){
        for(int i = 0 ; i<NumOfAcc ; i++){
            Bank[i][0]=0;
            Bank[i][1]=0;
    }
    printf("You Have exited the program.\n\n");
    return;
    }