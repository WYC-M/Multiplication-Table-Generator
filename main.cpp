# include <iostream>
# include "header.h"

int main()
{
	int a = 1;//����a�ǳ˷�ʽ�ӵĳ���2
	int b = 1;//����b�ǳ˷�ʽ�ӵĳ���1
	int c = 1;//����c�ǵ������ɵ�ʽ�Ӹ���
	int y;//����y�����ɳ˷��������

	//��ͷ����
	std::cout << "=========================================================" << std::endl;
	std::cout << "�˷��������� Multiplication Table Generator v3.1 By WYC-M" << std::endl;
	std::cout << "=========================================================" << std::endl;
	std::cout << std::endl;

	//ѯ����������
	std::cout << "����������Ҫ���ɵ����� How many columns you want to generate:";
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
	std::cout << "���س����˳� Press Enter to exit" << std::endl;
	std::cin.get();
	std::cin.get();
}