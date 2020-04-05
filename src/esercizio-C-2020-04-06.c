/*
 ============================================================================
 Name        : Esercizio
 Author      : Yvan Ngoufack
 Version     :
 Copyright   : Your copyright notice
 Description : esercizio-C-2020-04-06
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



	int FindBruteForce(int b[]){

		int *ptr, i , x;

		ptr=b;

		int y = calloc(10, sizeof(int)); //alloco una dimensione per poter utilizzarla nel ciclo for

		for (i=0;i<sizeof(int) ;i++){

		  x= b[i];

		}
			 if (x!=*ptr)

			 {

				 printf("c'è un elemento non duplicato");
			 }
			 else {

				 printf("tutto ok");
			 }



		}



		int main(int argc, char *argv[]) {


			int a []  = { 1,5,6,2,1,6,4,3,2,5,3};

			FindBruteForce(a);

		}



