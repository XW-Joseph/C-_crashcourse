#include <cstdio>
//comment from T2
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
union Variant{
	char string[10];
	int integer;
	double floating_point;
};
class YearCnt{
	void add_Yr(){
		year++;
	}
	bool set_year(int newyr){
		if(newyr<2020) return false;
		year = newyr;
		return true;
	}
	int get_year(){
		return year;
	}
	private:
	int year;
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
	YearCnt clock;
	clock.set_year(2020);
	clock.add_Yr();clock.add_Yr();
	printf("year ++ ++ = %d\n",clock.get_year());
	Variant v;
	v.integer = 42;
	printf("var int %d\n",v.integer);
	v.floating_point = 2.7182818284;
	printf("Eulers no e:	%f\n", v.floating_point);
	printf("garbage int now:	%d\n ",v.integer);
}
