#include<stdio.h>
using namespace std;

	int main(){
		int luachon;
		float tiendoira,tienquydoi; 
		printf("==============CHUONG TRINH CHUYEN DOI TIEN TE============= \n");
		printf("1. USD to VND \n");
		printf("2. EUR to VND \n");
		printf("3. GBP to VND \n");
		printf("4. JPY to VND \n");
		printf("5. VND to USD \n");
		printf("6. VND to EUR \n");
		printf("7. VND to GBP \n");
		printf("8. VND to JPY \n");
		printf("Nhap don vi tien te ban muon chuyen doii (1-8) ? \n");
		scanf ("%D",&luachon);
		
		printf("nhap so tien can chuyen");
		scanf("%f",&tienquydoi);
		
		switch (luachon){
			case 1:
				tiendoira = tienquydoi*23500;
				printf(" %.1f USD = %.1f VND ",tienquydoi, tiendoira);
				break;
			case 2:
				tiendoira = tienquydoi*25000;
				printf(" %.1f EUR = %.1f VND ",tienquydoi, tiendoira);
				break;
			case 3:
				tiendoira = tienquydoi*28000;
				printf(" %.1f GBP = %.1f VND ",tienquydoi, tiendoira);
				break;
			case 4:
				tiendoira = tienquydoi*180;
				printf(" %.1f JPY = %.1f VND ",tienquydoi, tiendoira);
				break;
			case 5:
				tiendoira = tienquydoi/23500;
				printf(" %.1f VND = %.1f USD ",tienquydoi, tiendoira);
				break;
			case 6:
				tiendoira = tienquydoi/25000;
				printf(" %.1f VND = %.1f EUR ",tienquydoi, tiendoira);
				break;
			case 7:
				tiendoira = tienquydoi/28000;
				printf(" %.1f VND = %.1f GBP ",tienquydoi, tiendoira);
				break;
			case 8:
				tiendoira = tienquydoi/180;
				printf(" %.1f VND = %.1f JPY ",tienquydoi, tiendoira);
				break;			
		}
		
		return 0; 
		
	} 
 
