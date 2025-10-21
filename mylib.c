#include<stdio.h>
#include"mylib.h"

// Function to check digits of a number
int reverseDigits(int n){
	int rev=0;
	while(n>0){
		rev=rev*10+(n%10);
		n=n/10;
	}
	return rev;
}

// Function to check if number is Armstrong

int isArmstrong(int num){
	int original=num,sum=0,digits=0;
	while(original>0){
		digits++;
		original/=10;
	}
original=num;
while(orginal>0)
    int digits=original%10;
    int power=1;
    for(int i=0;i<digits;i++){
	power = power*digits;
}
    sum = sum+power;
    original/=10;
return (sum==num);
}
 
//  Function to check if a number is Adams number 

int isAdams (int num){
	int square,rev,revsquare;
	square=num*num;
	rev=rev*rev;
	return reverseDigits(square)==revsquare;
}

// Function to check if number is prime

int is Prime(int num){
	if(num<=1){
		return 0;
	}
	for(int i=2;i*i;<=num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

// Function to check prime Palindrome
int isPalidrome(int num){
	if(isPrime(num)) && num == reverseDigits; 
	return 1;
	return 0;
}

// Main menu-driven program
int main(){
	int choice, num;
	
	do{
		printf("\n====MENU====\n");
		printf("1. Check Armsrtong Number");
		printf("2. Check Adams Number");	
        printf("3. Check Prime Palindrome  Number");
        printf("4. Exit\n");
        printf("Enter your choice");
		scanf("%d", &choice);
		
		if (choice == 5)
		break;
		if(choice >=1 && choice <= 3){
			printf("Enter a nmber");
			scanf("%d", &num);
		}
		
		swtich (choice){
			case1: if(isArmstrong(num)){
				primtf("%d is an Armstrong Number.\n", num);
		}else {
			printf("%d is NOT an armstrong number. \n", num);
		}
		break;
		case2: if(isAdams(num)){
			printf("%d ia an adams number.\n", num);
		}else {
		printf("%d is NOT an adams number.\n", num); 
		}
			break;
	case3: if(isPrimePalindrome(num)){
		printf("%d is an PrimePalidrome number.\n", num);
	}	else {
		printf("%d is NOT a PrimePalidrome number.\n", num);
	}
	break:
		default:
			printf("Invalid choice! Please select between 1-4\n");
	}
}
while(choce!=4);
return 0;
}


