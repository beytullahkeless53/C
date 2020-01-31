#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
int a;
int i=0;
int k=0;
int eleman;
int d=0;
int temp=0;
int y=0;

printf("eleman sayisini girniz");
scanf("%d",&a);	
int dizi[a];	

for(i=0;i<a;i++){
	printf("eleman giriniz");
	scanf("%d",&eleman);
	
	dizi[i]=eleman;	
}	
	
for (d=1;d<a;d++){
	
	for(k=d;k>0;k--){
		if(dizi[k-1]>dizi[k]){
			temp=dizi[k-1];
			dizi[k-1]=dizi[k];
			dizi[k]=temp; 
		}
		
	}
	
}	
	
for(y=0;y<a;y++){
	
	
	printf("%d\n",dizi[y]);
}	
	

	
	
	
	return 0;	
}
