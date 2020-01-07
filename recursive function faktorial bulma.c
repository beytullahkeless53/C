#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int factoriel(int n){
	
	if(n<=1){
		
		return 1;	
	}
	
	else{
		
		
		return (n * factoriel(n-1));
		
	}
}




int main(){
int a;
int sonuc=0;
printf("bir sayi giriniz");
scanf("%d",&a);
sonuc=factoriel(a);
printf("%d",sonuc);



	
	return 0;
}
