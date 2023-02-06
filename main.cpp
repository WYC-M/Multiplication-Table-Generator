# include <iostream>
# include "header.h"

int main()
{
	int a = 1;//变量a是乘法式子的乘数2
	int b = 1;//变量b是乘法式子的乘数1
	int c = 1;//变量c是单行生成的式子个数
	int y;//变量y是生成乘法表的行数

	//开头文字
	std::cout << "=========================================================" << std::endl;
	std::cout << "乘法表生成器 Multiplication Table Generator v3.1 By WYC-M" << std::endl;
	std::cout << "=========================================================" << std::endl;
	std::cout << std::endl;

	//询问生成行数
	std::cout << "请输入您想要生成的列数 How many columns you want to generate:";
	std::cin >> y;
	std::cout << std::endl;
	
	for (int e = 0; e < y; e++) 
	{
		for (int i = 0; i < c; i++)
		{
			message(b);
			x();
			message(a);
			eq();
			message(a * b);
			space();
			b++;
		}
		
		std::cout << std::endl;

		b = 1;
		
		a++;
        c++;
	}

	std::cout << std::endl;
	std::cout << "按回车键退出 Press Enter to exit" << std::endl;
	std::cin.get();
	std::cin.get();
}