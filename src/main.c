#include <stdio.h>
int main()
{
	int nt, nj, c; //Переменные
	nj = 7; //Номер студента
	c = 6; //Сумма всех вопросов
	nt = ((nj - 1) % c) + 1; //Формула для вывода результата
	putchar(nt);
}
