#include <stdio.h>
int main()
{
	int n, n1, n2, n3; //Переменные
	n = 123; //Число для  разворота 
	n1 = n / 100; //НАхождение левого числа
	n2 = n / 10 % 10; //Нахождение  центрального числа
	n3 = n % 10; //Нахождение  числа с права
	n = n1 + n2 * 10 + n3 * 100; //Результат
}
