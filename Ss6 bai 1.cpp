#include<stdio.h>
int main(){
	int a;
	int sum = 0;
	for(int i =0;i<5;i++){
	printf("Nhap so nguyen bat ki:");
	scanf("%d",&a);
	if (a%2!=0){
		sum+=a;}
	fflush(stdin);
	}
	printf("Tong cac so nguyen le la: %d",sum);
	return 0 ;
}
