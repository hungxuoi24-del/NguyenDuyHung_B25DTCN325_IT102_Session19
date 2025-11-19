#include<stdio.h>

void trungbinh(int *arr, int n, float *result){
	int sum = 0;
	int i;
	for(i = 0; i < n; i++){
		sum += *(arr + i);
	}
	*result = (float)sum / n;

}
int main(){
	
	int mang[] = {4, 8, 6, 10, 2}; 
	int size = sizeof(mang) / sizeof(mang[0]);
	float avg;
	
	trungbinh(mang, size, &avg);
	printf("Gia tri trung binh cua mang la: %.2f\n", avg);
	
	return 0;
}
