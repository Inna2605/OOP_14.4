// �������� �������, ������� �������� ������ ������� ������� 
// �� ������������ ����������� (���� ����������� ������ ��������� � ���� ��������).

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

