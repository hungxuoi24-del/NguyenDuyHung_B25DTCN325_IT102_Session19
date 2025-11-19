#include<stdio.h>

int findMax(int *arr, int n){
	int max = *arr;
	int i;
	for(i = 0; i < n; i++){
		if(*(arr + i) > max){
			max = *(arr + i);
		}
	} 
	return max;
}
int main(){
	int mang[] = {3, 7, 2, 9, 5, 11, 4};
	int size = sizeof(mang) / sizeof(mang[0]);
	int maxValue = findMax(mang, size);
	
	printf("Phan tu lon nhat trong mang la :%d\n", maxValue);
	
	return 0; 
}
