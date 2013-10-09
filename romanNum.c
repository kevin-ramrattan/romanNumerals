#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#define pause system ("pause")
#define cls system ("cls")

void getNumber(int *num);
void romanNumerals(int userNum);

main(){
	int number =100;
	do{
		getNumber(&number);
		
		romanNumerals(number);

		pause;
		cls;
	}while(number!=0);//end of do While if the user enter 0 to quit.

}//end of main

void getNumber(int *num){

	do{
		printf("Enter a number <= 1000 OR Enter '0' to Quit:\n");
		scanf("%i",&*num);
		printf("\n");
	}while(*num>1000);// end of do While to make sure the number entered is not greater than 1000.

}//end of getNumber

void romanNumerals(int userNum){
	char hundreds[11][5] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","M"};
	char tens [10][5] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	char ones [10][5] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
	int H = (userNum / 100);
	int T = ((userNum - (H*100)) / 10);
	int O = ((userNum- (T*10)) % 10);
	printf("%i is %s%s%s in Roman numerals\n\n", userNum, hundreds[H], tens[T], ones[O]);

}//end of romanNumerals

