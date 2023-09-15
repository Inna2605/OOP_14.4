// Напишите функтор, который умножает каждый элемент вектора 
// на определенный коэффициент (этот коэффициент должен храниться в поле функтора).

#include "multiplication.h"

int multiplication::operator()(int a)
{
	return Vai * a;
}
