#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;
int main()
{
	srand(time(NULL));
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	����������, �������� �� ������ ����� ����� ������*/
		int a;
		a = rand() % 1000;
		if (a % 2 == 0)
		{
			cout << a << endl;
			cout << "Chetnoe" << endl;
		}
		else
		{
			cout << a << endl;
			cout << "Ne chetnoe" << endl;
		}
	}
	if (task == 2)
	{
		/*2.	�������� �������, ������� �������� ��������, �����  ����� � ������ ���� ��� ����.*/
		int a;
		a = rand() % 1000;
		if (a % 3 == 0)
		{
			cout <<"Chislo "<< a <<" kratno 3"<< endl;
			
		}
		else
		{
			cout << "Chislo " << a << " ne kratno 3" << endl;
		}

	}
	if (task == 3)
	{
		///*3.	�������� �������, ������� �������� ��������, ����� ������ �� �����  � � � ��������.*/
		int a,b;
		a = rand() % 1000;
		b = rand() % 1000;
		if (a % 2 != 0&&b%2!=0)
		{
			cout << "Chisla " << a <<" i "<<b<<" nechetnye" << endl;

		}
		else
		{
			cout << "Uslovie ne vypolnyetsya "<< endl;
		}
	}
	if (task == 4)
	{
		/*4.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� X = 0, Y = 0, Z = 1
			a.X<Y>Z
			b.X>Y
			c.	(X>Z)<Y*/
		int x, y, z,a,b,c;
		x = 0;
		y = 0;
		z = 1;
		a=x < y > z;
		b = x > y;
		c = (x > z) < y;
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;


	}
	if (task == 5)
	{
		/*5.	�������� ���������� ���������, ����������� ������� ����������� �������
			a.y = 2tg x;
		b.� = 3 / (x - 1).*/
		int x, y;
		x = rand() % 10;//���������� ��������� ����� � ��������
		if (x > 3, 14 || x < 3, 14)
		{
			x = x * 180 / 3.14;//��������� � �������
			y = tan(x);
			cout << y << endl;
		}


	}
	if (task == 6)
	{
		/*6.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� � = 1, � = 0, � = 1
			a.A<(A>B)<C
			b.A<C>(B<C)
			c.	(A<B>C)<A*/
		int a, b, c,x, y, z;
		a = 1;
		b = 0;
		c = 1;
		x = a < (a > b) < c;
		y = a<c>(b < c);
		z = (a<b>c) < a;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	if (task == 7)
	{
		/*7.	�������� ���������� ��������� ������������, ��� ����� � �������� �����������.*/
		int a;
		a =1+ rand() % 10000;
		if (a > 99 && a < 10000)
		{
			cout << a << endl;
			cout << " trehznachnoe" << endl;
		}
		else
		{
			cout << a << endl;
			cout << " uslovie ne vypolnyetsya " << endl;
		}
	}
	if (task == 8)
	{
		/*8.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� �, � � � ������ 45.*/
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a < 45 && b >= 45 && c >= 45 || b < 45 && a >= 45 && c >= 45 || c < 45 && a >= 45 && b >= 45)
		{
			
			cout << "Uslovie vypolnyetsya" << endl;
		}
		else
		{
			
			cout << "uslovie ne vypolnyetsya" << endl;
		}
	}
	if (task == 9)
	{
		/*9.	�������� �������, ������� �������� ��������, ����� ����� � �� ������ ���� � ������������ �����*/
		int a;
		a = rand() % 1000;
		if (a % 3 != 0 && a % 1 == 0)
		{
			cout << a << endl;
			cout << "Uslovie vypolnyetsya" << endl;

		}
		else
		{
			cout << a << endl;
			cout << "uslovie ne vypolnyetsya" << endl;

		}
	}
	if (task == 10)
	{
		/*10.	�������� ���������� ���������, ������� ����������, ����������� �� ����� � ���������  �� - 137 �� - 51 ���
		��������� �� 123 �� 55.*/
		int a;
		a = rand() % 500;
		if (a > -138 && a < -50 || a>54 && a < 124)
		{
			cout << a << endl;
			cout << "Uslovie vypolnyetsya" << endl;
		}
		else
		{
			cout << a << endl;
			cout << "uslovie ne vypolnyetsya" << endl;
		}
	}
}