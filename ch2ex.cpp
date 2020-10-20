#include <cstdio>

enum class Operand{
Add,Sub, Div, Mul
};
struct Calc{
	Operand operand;
	Calc(Operand op){
		operand = op;
	};
	int calc(int a, int b){
		Operand ops = operand;
		switch(ops){
			case Operand::Add:{return a+b;break;}
			case Operand::Div:{return a/b;break;}
			case Operand::Mul:{return a*b;break;}
			case Operand::Sub:{return a-b;break;}
			default:{printf("no recognised operand\n");return 0;}
		};
	};

};
int main(){
	Calc cal = Calc(Operand::Add);
	printf("%d\n",cal.calc(2,3));
	return 0;
};
