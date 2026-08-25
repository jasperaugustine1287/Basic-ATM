#include <stdio.h> 
 
int main() {  
    int acc_no, passcode, choice = 0;  
    float b1 = 1000, b2 = 2345, b3 = 1243, b4 = 5000, b5 = 5467, b6 = 6767, b7 = 10000, b8 = 70, b9 = 23455, b10 = 1974628; 
    float amt1, amt2, amt3, amt4, amt5, amt6, amt7, amt8, amt9, amt10; 
    
 
    printf("Welcome to our Bank\n"); 
    printf("Enter your account number:\n"); 
    scanf("%d", &acc_no); 
    printf("Enter your passcode:\n"); 
    scanf("%d", &passcode); 
     
    if(acc_no == 1){ 
        if(passcode == 10){ 
            printf("Name: Tony\n"); 
            printf("Your account no. is: 1\n"); 
            printf("Your Bank balance is: %g\n", b1); 
            while (choice != 4) { 
                printf("1. Deposit\n");
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt1); 
                    if (amt1 > 0) { 
                        b1 += amt1;  
                        printf("Successfully deposited ₹%g\n", amt1); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt1); 
                    if (amt1 > 0 && amt1 <= b1) { 
                        b1 -= amt1;  
                        printf("Successfully withdrew ₹%g\n", amt1); 
                    } else if (amt1 > b1) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Tony, your current balance is: ₹%g\n", b1); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==2){ 
        if(passcode==9){ 
            printf("Name: John wick\n"); 
            printf("Your account no. is: 2\n"); 
            printf("Your Bank balance is: %g\n", b2); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt2); 
                    if (amt2 > 0) { 
                        b2 += amt2;  
                        printf("Successfully deposited ₹%g\n", amt2); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt2); 
                    if (amt2 > 0 && amt2 <= b2) { 
                        b2 -= amt2;  
                        printf("Successfully withdrew ₹%g\n", amt2); 
                    } else if (amt2 > b2) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello John wick, your current balance is: ₹%g\n", b2); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==3){ 
        if(passcode==8){ 
            printf("Name: Binod\n"); 
            printf("Your account no. is: 3\n"); 
            printf("Your Bank balance is: %g\n", b3); 
            while (choice != 4) { 
            printf("1. Deposit\n"); 
            printf("2. Withdrawal\n"); 
            printf("3. Check Balance\n"); 
            printf("4. Exit\n"); 
            printf("Enter your choice: "); 
            scanf("%d", &choice); 
 
            if (choice == 1) { 
                printf("Enter deposit amount: "); 
                scanf("%g", &amt3); 
                if (amt3 > 0) { 
                    b3 += amt3;  
                    printf("Successfully deposited ₹%g\n", amt3); 
                } else { 
                    printf("Invalid amount!\n"); 
                } 
            }  
            else if (choice == 2) { 
                printf("Enter withdrawal amount: "); 
                scanf("%g", &amt3); 
                if (amt3 > 0 && amt3 <= b3) { 
                    b3 -= amt3;  
                    printf("Successfully withdrew ₹%g\n", amt3); 
                } else if (amt3 > b3) { 
                    printf("Insufficient balance!\n"); 
                } else { 
                    printf("Invalid amount!\n"); 
                } 
            }  
            else if (choice == 3) { 
                printf("Hello Binod, your current balance is: ₹%g\n", b3); 
            }  
            else if (choice == 4) { 
                printf("Goodbye!\n"); 
            }  
            else { 
                printf("Invalid choice\n"); 
            } 
        } 
     
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==4){ 
        if(passcode==7){ 
            printf("Name: Frank\n"); 
            printf("Your account no. is: 4\n"); 
            printf("Your Bank balance is: %g\n", b4); 
                    while (choice != 4) { 
            printf("1. Deposit\n"); 
            printf("2. Withdrawal\n"); 
            printf("3. Check Balance\n"); 
            printf("4. Exit\n"); 
            printf("Enter your choice: "); 
            scanf("%d", &choice); 
 
            if (choice == 1) { 
                scanf("%g", &amt4); 
                if (amt4 > 0) { b4 += amt4; printf("Deposited ₹%g\n", amt4); } 
                else { printf("Invalid amount!\n"); } 
            } 
            else if (choice == 2) { 
                scanf("%g", &amt4); 
                if (amt4 > 0 && amt4 <= b4) { b4 -= amt4; printf("Withdrew ₹%g\n", amt4); } 
                else if (amt4 > b4) { printf("Insufficient balance!\n"); } 
                else { printf("Invalid amount!\n"); } 
            } 
            else if (choice == 3) { printf("Hello Frank, balance: ₹%g\n", b4); } 
            else if (choice == 4) { printf("Goodbye!\n"); } 
            else { printf("Invalid choice\n"); } 
        } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==5){ 
        if(passcode==6){ 
            printf("Name: Emma\n"); 
            printf("Your account no. is: 5\n"); 
            printf("Your Bank balance is: %g\n", b5); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt5); 
                    if (amt5 > 0) { 
                        b5 += amt5;  
                        printf("Successfully deposited ₹%g\n", amt5); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt5); 
                    if (amt5 > 0 && amt5 <= b5) { 
                        b5 -= amt5;  
                        printf("Successfully withdrew ₹%g\n", amt5); 
                    } else if (amt5 > b5) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Emma, your current balance is: ₹%g\n", b5); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
             
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==6){ 
        if(passcode==5){ 
            printf("Name: sneha\n"); 
            printf("Your account no. is: 6\n"); 
            printf("Your Bank balance is: %g\n", b6); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt6); 
                    if (amt6 > 0) { 
                        b6 += amt6;  
                        printf("Successfully deposited ₹%g\n", amt6); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt6); 
                    if (amt6 > 0 && amt6 <= b6) { 
                        b6 -= amt6;  
                        printf("Successfully withdrew ₹%g\n", amt6); 
                    } else if (amt6 > b6) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello sneha, your current balance is: ₹%g\n", b6); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==7){ 
        if(passcode==4){ 
            printf("Name: Neon\n"); 
            printf("Your account no. is: 7\n"); 
            printf("Your Bank balance is: %g\n", b7); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt7); 
                    if (amt7 > 0) { 
                        b7 += amt7;  
                        printf("Successfully deposited ₹%g\n", amt7); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt7); 
                    if (amt7 > 0 && amt7 <= b7) { 
                        b7 -= amt7;  
                        printf("Successfully withdrew ₹%g\n", amt7); 
                    } else if (amt7 > b7) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Neon, your current balance is: ₹%g\n", b7); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==8){ 
        if(passcode==3){ 
            printf("Name: Peter Parker\n"); 
            printf("Your account no. is: 8\n"); 
            printf("Your Bank balance is: %g\n", b8); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt8); 
                    if (amt8 > 0) { 
                        b8 += amt8;  
                        printf("Successfully deposited ₹%g\n", amt8); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt8); 
                    if (amt8 > 0 && amt8 <= b8) { 
                        b8 -= amt8;  
                        printf("Successfully withdrew ₹%g\n", amt8); 
                    } else if (amt8 > b8) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Peter Parker, your current balance is: ₹%g\n", b8); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==9){ 
        if(passcode==2){ 
            printf("Name: Techie\n"); 
            printf("Your account no. is: 9\n"); 
            printf("Your Bank balance is: %g\n", b9); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt9); 
                    if (amt9 > 0) { 
                        b9 += amt9;  
                        printf("Successfully deposited ₹%g\n", amt9); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt9); 
                    if (amt9 > 0 && amt9 <= b9) { 
                        b9 -= amt9;  
                        printf("Successfully withdrew ₹%g\n", amt9); 
                    } else if (amt9 > b9) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Techie, your current balance is: ₹%g\n", b9); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else if(acc_no==10){ 
        if(passcode==1){ 
            printf("Name: Tommy versity\n"); 
            printf("Your account no. is: 10\n"); 
            printf("Your Bank balance is: %g\n", b10); 

            while (choice != 4) { 
                printf("1. Deposit\n"); 
                printf("2. Withdrawal\n"); 
                printf("3. Check Balance\n"); 
                printf("4. Exit\n"); 
                printf("Enter your choice: "); 
                scanf("%d", &choice); 
 
                if (choice == 1) { 
                    printf("Enter deposit amount: "); 
                    scanf("%g", &amt10); 
                    if (amt10 > 0) { 
                        b10 += amt10;  
                        printf("Successfully deposited ₹%g\n", amt10); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 2) { 
                    printf("Enter withdrawal amount: "); 
                    scanf("%g", &amt10); 
                    if (amt10 > 0 && amt10 <= b10) { 
                        b10 -= amt10;  
                        printf("Successfully withdrew ₹%g\n", amt10); 
                    } else if (amt10 > b10) { 
                        printf("Insufficient balance!\n"); 
                    } else { 
                        printf("Invalid amount!\n"); 
                    } 
                }  
                else if (choice == 3) { 
                    printf("Hello Tommy versity, your current balance is: ₹%g\n", b10); 
                }  
                else if (choice == 4) { 
                    printf("Goodbye!\n"); 
                }  
                else { 
                    printf("Invalid choice\n"); 
                } 
            } 
        } else { 
            printf("Please enter the valid Credentials\n"); 
        } 
    } 
    else { 
        printf("Invalid account number!\n"); 
    } 
 
    return 0; 
}
