#include <stdio.h>
int main()
{
	int a, a1, a2, a3, a4; //Переменные
	a = 7; //Число
	
	a1 = a * a; //1 действие для а^4
	a1 = a1 * a1;  //2 действие для а^4
	
	a2 = a * a * a; //1 и 2 действия  для а^6
	a2 = a2 * a2; //3 действие для а^6
	
	a3 = a * a; //1 действие для а^8
	a3 = a3 * a3; //2 действие для а^8
	a3 = a3 * a3; //3 дія для а^8
	
	a4 = a * a; //1 действие для а^10
	a4 = a4 * a4 * a; //2 и 3 дия для а^10
	a4 = a4 * a4; //4 действие для а^10
}
