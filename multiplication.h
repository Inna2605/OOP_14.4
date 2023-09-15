// Напишите функтор, который умножает каждый элемент вектора 
// на определенный коэффициент (этот коэффициент должен храниться в поле функтора).

#pragma once
class multiplication
{
	int Vai;
public:
	multiplication(int iVai) {
		Vai = iVai;
	}
	int operator()(int a);
};

