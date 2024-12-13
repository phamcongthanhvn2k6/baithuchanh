#include <stdio.h>
using namespace std;

	int main(){
		int n,i;
		printf("Hay nhap vao so nguyen N: ");
		scanf("%d",&n);
		printf("Cac uoc cua so do la: \n");
		for ( i =1; i< n;i++){
			if ( n % i==0 ){
				printf("%d\n",i);
			}
		}
		return 0;
	} 
