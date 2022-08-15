#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int ary[n];
	printf("Nhap cac so nguyen tuy y:\n");
	for(int i=0; i<n; i++){
		printf("ary[%d]",i);
		scanf("%d",&ary[i]);
	}
	
	if(n<2){
		printf("%dKhong phai la so nguyen to.\n",n);
		}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n % 1 == 0){
			printf("Mang xuat hien so nguyen to");
			}
		}
	int c = 0;
		for(int i = 1; i<= n; i++){
		if(c==1){
		printf("Cac so nguyen to co trong mang:%d\n",ary[i]);
		printf("Khong co so nguyen to.");
		}
			if(c == 0){
		printf("%d Mang khong co so nguyen to.\n");
			}		
		}
	}
}
