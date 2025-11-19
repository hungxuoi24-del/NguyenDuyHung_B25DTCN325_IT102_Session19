#include<stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd){
	*even = 0;
	*odd = 0;
	int i;
	for(i = 0; i < n; i++){
		if(*(arr + i) % 2 == 0){
			(*even)++;
		}
		else{
			(*odd)++;
		}
	}
}
int main(){
	int mang[] = {3, 6, 7, 10, 15, 22, 9};
	int size = sizeof(mang) / sizeof(mang[0]);
	
	int Sochan, Sole;
	countEvenOdd(mang, size, &Sochan, &Sole);
	printf("So phan tu chan: %d\n", Sochan);
	printf("So phan tu le : %d\n", Sole);
	
	return 0;	
}
