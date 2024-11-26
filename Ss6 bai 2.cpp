#include<stdio.h>
int main(){
	int a;
	int sumle = 0;
	int sumchan = 0;

	for(int i =0;i<5;i++){
	printf("Nhap so nguyen bat ki: ");
	scanf("%d",&a);
	if (a%2!=0){
	sumle+=1;
	} else sumchan+=1;
	fflush(stdin);
	}
	printf("So luong so nguyen le la: %d\n",sumle);
	printf("So luong so nguyen chan la: %d",sumchan);

	return 0 ;
}
