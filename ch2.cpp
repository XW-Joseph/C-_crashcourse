#include <cstdio>

void taunt(){
	printf("hey you smell of elderberries!\n");
}
int main(){
	int myArr[100];
	int arr[] = {1,2,3,4};
	printf("ele3 is %d.\n",arr[2]);
	arr[2] = 100;
	printf("ele3 is %d.\n",arr[2]);
	taunt();
	unsigned long max = 0;
	unsigned long values[] = {10,20,30,50,40,0};
	for(size_t i=0;i<5;i++){
		if(values[i]>max)max=values[i];
	}
	printf("maxval is %lu\n",max);
}
