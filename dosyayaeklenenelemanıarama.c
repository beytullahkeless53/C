#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *dosya=fopen("rak�m.txt","w");
int a;
int c;
int g;
int i;
int eleman;
int sayac=0;
int aranacakeleman;
if(dosya==NULL){
	printf("dosya olusturulamad�");	
}
else{
	printf("dosya olusturuldu eleman ekleye bilirsin\n");
	printf("Girilecek eleman sayisini giriniz");
	scanf("%d",&a);	
	for(i=0;i<a;i++){
		printf("eleman girinzi");
		scanf("%d",&eleman);
		fprintf(dosya,"%d\n",eleman);	
	}
	fclose(dosya);
}
FILE *filep=fopen("rak�m.txt","r");
if(filep==NULL){
	
	
	printf("b�yle bir dosya olmad�g�ndan okuma yazmazs�n�z");
	
}
else{
	printf("dosya bulundu okuma yapabilirsiniz\n");
	printf("aramak istediginiz eleman� giriniz\n");
	scanf("%d",&aranacakeleman);
	for(c=0;c<a;c++){
		
		fscanf(filep,"%d",&g);
	if(g==aranacakeleman){
		printf("eleman bulundu");
		sayac++;
		break;
	}

	}
	
if(sayac==0){
	printf("eleman bulunamadi");
}	
	
}

	return 0;
}
