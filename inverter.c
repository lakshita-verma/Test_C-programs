/**************************
 3rd march 2022

 this program will take two arguments as input
 both string integers 

 first will be the number and 2nd will be the 
 number of bits upto which the bits must be inverted 
 from lsb to msb
 * ***********************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int num = atoi(argv[1]), c = atoi(argv[2]),inverter = 1,i;
	for(i = 0;i<c;i++){
		num = num^inverter;
		inverter = inverter<<1;
	} 
	printf("%d\n",num);
}