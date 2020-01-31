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
int j=0;

printf("eleman sayisini girniz");
scanf("%d",&a);	
int dizi[a];	

for(i=0;i<a;i++){
	printf("eleman giriniz");
	scanf("%d",&eleman);
	
	dizi[i]=eleman;	
}	
	


for(k=1;k<a;k++){
temp=dizi[k];
j=k-1;
while(temp < dizi[j] && j>=0){
	
	dizi[j+1]=dizi[j];
	j--;
}

dizi[j+1]=temp;
}


for(y=0;y<a;y++){
	
	printf("%d\n",dizi[y]);
}	

	
	
	
	return 0;	
}
