#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void Add(int n1, int n2)
//{
//	printf("���� ��: %d\n", n1 + n2);
//}

//void Sub(int n1, int n2)
//{
//	printf("�� ��: %d\n", n1 - n2);
//}

/*int Mul(int n1, int n2)
{
	return n1 * n2;
}

int Div(int n1, int n2)
{
	return n1 / n2;
}*/

/*void Calc(int num1, char oper, int num2)
{
	switch (oper)
	{
	case '+':
		Add(num1, num2);
		break;
	case '-':
		Sub(num1, num2);
		break;
	case '*':
		printf("���� ��: %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("���� ��: %d\n", Div(num1, num2));
		break;
	}
}*/

int Total(int kor, int mat, int eng)
{
	return kor + mat + eng;
}

double Avg(int total)
{
	return total / 3.0;
}

char Grade(double avg)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;
	}
}

int main()
{

	//Add2(11, 47);

	/*int num1, num2;

	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);

	Add(num1, num2);
	Sub(num1, num2);
	printf("���� ��: %d\n", Mul(num1, num2));
	printf("���� ��: %d\n", Div(num1, num2));*/

	/*int num1, num2;
	char oper;

	printf("���� �Է�: ");
	scanf("%d %c %d", &num1, &oper, &num2);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	total = Total(kor, mat, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("����: %d\n", total);
	printf("���: %.2f\n", avg);
	printf("���: %c\n", grade);

	return 0;
}