#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n=");
    scanf("%d",&n);
    
	int ary[n];
	int max = 0;//save chi so xa x nhat
    
    printf("Nhap cac so nguyen tuy y:\n");
    for(int i=0; i<n; i++){
    printf("ary[%d]=",i);
	scanf("%d",&ary[i]);
    }
    int x,vt,gt;
    printf("Nhap x=");
    scanf("%d",&x);
     for(int i=0;i<n;i++){
     		if (max<abs(x-ary[i])){
     			max=abs(x-ary[i]);
     			vt=i;
     			gt=ary[i];
     			}
     		}
     			if(max==0){
     				printf("Mang toan cac so giong nhau x.");
     				}else{
     					printf("Gia tri phan tu xa %d nhat tai vi tri %d voi gia tri %d là: %d", x,vt,max,gt);
					 }
     			return 0;
}
     			
     			
     			
     			
     

     	

    

    

