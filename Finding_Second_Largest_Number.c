#include <stdio.h>

int second_Number(int a[],int size);

int main(){
	
	int array[5]={1,11,0,15,4};
	int snumber=second_Number(array,5);
	printf("Second Largest Number of Array : %d",snumber);
	
	
}

int second_Number(int a[],int size){
	
	int max,smax,i;
	max=a[0];
	smax=a[1];
	
	if(max<smax){
		max=smax;
		smax=a[0];
	}
	
	for(i=2;i<size;i++){
		if (a[i]>max){
			smax=max;
			max=a[i];
			
		}
		
		else if(a[i]>smax){
			smax=a[i];
		}
	}
	return smax;
	
	
}
