#include <cstdio>
class Dumb{
	int mine{};
	public:
	Dumb(){mine = 1;}
	int get(){return mine;}
	void set(int i){mine = i;}
};
int main(){
	int* my_ptr;
	printf("value of my pointer is %p\n",my_ptr);
	int sample{};
	printf("sample: %d\n",sample);
	int *sample_address = &sample;
	*sample_address = 17325;
	printf("&sample_adress: %p ::and sample:  %d ::and sample_adress value: %d\n",sample_address,sample,*sample_address);
	Dumb d;
	Dumb* d_ptr = &d;
	d_ptr->set(42);//ptr deref and use method pog can also use (*d_ptr).set(x)
	printf("value of dumb: %d\n",d_ptr->get());

}
