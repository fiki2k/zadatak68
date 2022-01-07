// Program ce izracunat bazu stozca.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

//Funkcija za izracunavanje baze stozca.
float baza(int polumjer){
	
	//Baza stozca je krug pa racanumo po formuli za povrsinu kruga.
	float baza;
	baza=PI*polumjer*polumjer;
	return baza;
}

int main(){
   int polumjer;
   printf("Unesi polumjer kugle:\n");
   scanf("%d",&polumjer);
   float B=baza(polumjer);
   printf("Povrsina baze stozca je %f\n",B);
   return 0;
}
