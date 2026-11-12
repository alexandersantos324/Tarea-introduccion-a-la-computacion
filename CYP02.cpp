#include <stdio.h>
int main() 
{
	
		 //DECLARACION DE LAS VARIABLES
	
	unsigned int bfsize;
	unsigned int bfoffBits;
	  //RECIBIR INFORMACION
	
	scanf_s("%u", &bfsize);
	
	scanf_s("%u", &bfoffBits);
	//IMPRIMIR INFORMACION EH HEXADECIMAL
	printf_s("BM");
	printf_s("%08X00000000%08X", bfsize,bfoffBits);

	return 0;
}															  
			
			
			
