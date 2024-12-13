#include <stdio.h>
#include<math.h>
using namespace std;

	int main(){
		int i,n,songuyento;
		
		printf("Nhap so N ban muon kiem tra: ");
		scanf("%d",&n);
		
		if(n<2){
			printf("so ban nhap khong hop le");
			return 0;
		} 
		else {
			songuyento=0;
		for (int i=1; i <=n ;i++){
			if( n %i==0 ){
				songuyento+=1;	
			}
		}		
	}
	//inketqua
	if( songuyento==2){
			printf("%d la so nguyen to",n);
		}
		else {
			printf("%d khong phai so nguyen to",n);
		}
	
	return 0;
	}
