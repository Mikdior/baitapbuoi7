#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n=");
    scanf("%d",&n);
    
	int ary[n];
	int min = 0;//save chi so gan x nhat
    
    printf("Nhap cac so nguyen tuy y:\n");
    for(int i=0; i<n; i++){
    printf("ary[%d]=",i);
	scanf("%d",&ary[i]);
    }
    int x,vt,gt;
    printf("Nhap x=");
    scanf("%d",&x);
     for(int i=0;i<n;i++){
     		if (min<abs(ary[i]-x)){
     			min=abs(ary[i]-x);
     			vt=i;
     			gt=ary[i];
     			}
     		}
     			if(min==0){
     				printf("Mang toan cac so giong nhau x.");
     				}else{
     					printf("Gia tri phan tu gan %d nhat tai vi tri %d voi gia tri %d là: %d", x,vt,min,gt);
					 }
     			return 0;
}
     			
     			
     			
     			
     

     	

    

    

