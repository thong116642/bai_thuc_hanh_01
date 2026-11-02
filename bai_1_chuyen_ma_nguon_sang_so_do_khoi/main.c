#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("Nhap so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh VSN\n");
			}else{
				printf("Phuong trinh VN\n");
			}
		}else{
			printf(":Phuong trinh co nghiem: x = %.2f\n",-c/b);
		}
	}else{
		float d=b*b-4*a*c;
		if(d<0){
			printf("Phuong trinh VN\n");
		}else if(d==0){
			printf("Phuong trinh co nghiem kep: %.2f\n",-b/(2*a));
		}else{
			float x1=(-b+sqrt(d))/(2*a);
			float x2=(-b-sqrt(d))/(2*a);
			printf("Phuong trinh co 2 nghiem: x1= %.2f va x2= %.2f\n",x1,x2);
		}
	}
	return 0;
}
