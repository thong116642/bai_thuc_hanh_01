#include <stdio.h>
    int ktra(int N){
    	if(N<=0) return 0;
		int S=0;
		int i;
		for(i=1;i<=N/2;i++){
			if(N%i==0){
			S+=i;
			}
		}
			if(S==N)return 1;
    return 0;
}
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int ket_qua=ktra(n);
	printf("Ket qua kiem tra(%d) = %d\n",n,ket_qua);
	return 0;
}
