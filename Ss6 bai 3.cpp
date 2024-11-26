#include<stdio.h>
int main(){
	int correctPass = 3102;
	int pass ;
	for(int i=0;i<5;i++){
	printf("Nhap mat khau de mo khoa gom 4 so: ");
	scanf("%d",&pass);
	if (pass!=correctPass){
	printf("Ban da nhap sai mat khau.\n");
	} else if(pass==correctPass){
	printf("Ban da nhap dung mat khau\n");
	break;
	}fflush(stdin);
	}
	return 0 ;
}
