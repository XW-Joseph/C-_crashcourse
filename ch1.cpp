#include  <cstdio>
int step_func(int x){
	int res = 0;
	if(x<0){res = -1;}
	else if(x>0){res = 1;}
	return res;
}
int abs_val(int x){
	return x*step_func(x);
}
int main(){
	int num1 = 100;
	int value1 = step_func(100);
	int num2 = 0;
	int value2 = step_func(0);
	int num3 = -100;
	int value3 = step_func(-100);
	int value4 = abs_val(-23);
	printf("num1: %d, step: %d\n",num1, value1);
	printf("num1: %d, step: %d\n",num2, value2);
	printf("num1: %d, step: %d\n",num3, value3);
	printf("abs val %d\n",value4);
	return 0;
}
