#include <cstdio>

void taunt(){
	printf("hey you smell of elderberries!\n");
};
enum class Names{
	Dinan,Teklan,Ivyn,Moiran,Camite,Julian,Aidan
};
struct Book{
	char name[256];
	int year;
	int pages;
	bool hardcover;
};
int main(){
	int myArr[100];
	int arr[] = {1,2,3,4};
	printf("ele3 is %d.\n",arr[2]);
	arr[2] = 100;
	printf("ele3 is %d.\n",arr[2]);
	taunt();
	unsigned long max = 0;
	unsigned long values[] = {10,20,30,50,40,0};
	//for(size_t i=0;i<5;i++){
	for(unsigned long value:values){
		//if(values[i]>max)max=values[i];
		if(value>max)max=value;
	}
	printf("maxval is %lu\n",max);
	Names name = Names::Dinan;
	switch(name){
		case Names::Teklan:{ printf("not Dinan \n");break;}
		case Names::Dinan:{printf("you are Dinan PogChamp \n");break;}
		default:{printf("not teky or diny\n");}
	}
	Book testBook;

	testBook.pages = 291;
	printf("testBook has %d pages\n",testBook.pages);
}
