#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
    scanf("%d",&n);
    
	int ary[n];
	int  a,b,max,min;
	a = max;
	b = min;
    
    printf("Nhap cac so nguyen tuy y=\n");
    for(int i=0; i<n; i++){
	 scanf("%d",&ary[i]);
    }
    min =ary[0];
    for(int i=0;i<n;i++){
    	if(ary[i]<min && b<a){
    		min = ary[i];
    	}	
    	}
			printf("\nDoan bat dau tu b: \n %d", min);
		
		    max = ary[0];
    for(int i=0; i<n; i++){
        if(ary[i] > max){
            max = ary[i];
            }
    }
    printf("\nDoan ket thuc tu a: \n %d", max);
	}
