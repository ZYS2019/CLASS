//�����
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//
////0����������
////1��������
//int checkPrimeNumber(int num)
//{
//	if (num == 0 || num == 1)
//		return 0;
//	else
//	{
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			if (num % i == 0)
//				return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int totalnum = 100;
//
//	for (int i = 0; i < totalnum; i += 2)
//	{
//		int res = checkPrimeNumber(i);
//		if (res == 1)
//		{
//			cout << "the primenumber is:" << i << endl;
//		}
//		if (i == 2) //��2֮��ֻ��������
//			i = 1;
//	}
//
//	system("pause");
//}


//������
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
////�����Ƿ�Ϊ����
////��Ϊ����������1
////��֮������0
//int primeNumber(int a)
//{
//	int b;
//	if (a == 2)
//	{
//		return 1;
//	}
//	if (a == 1 || a % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		for (b = 3; b <= sqrt(a); b += 2)
//		{
//			if (a%b == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i;
//	cout << "PrimeNumbers are:" << endl;
//	for (i = 1; i < 101; i++)
//	{
//		if (primeNumber(i) == 1)
//		{
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//

//#include "stdlib.h"
//#include "iostream"
//
//using namespace std;
//
//int CheckPrimeNum(int x)
//{
//	int i;
//	for (i = 2; i <= x / 2; i++)
//	{
//		if (x%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i;
//	for (i = 2; i < 100; i++)
//	{
//		if (CheckPrimeNum(i) == 1)
//			cout << "The Number is " << i << endl;
//	}
//	system("pause");
//}

//������
//#include "stdafx.h"
//#include "iostream"
//#include "stdlib.h"
//
//using namespace std;
//
//int PrimeNum(int i) {  //�ж�һ�����Ƿ�Ϊ����
//	int n = 2;
//	for (n; n <= i - 1; n++) {
//		if (i%n == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	for (int i = 2; i <= 100; i++) {
//		int m = PrimeNum(i);
//		if (m == 0)
//			cout << "PrimeNumber is:" << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//����ҫ
//#include "pch.h"
//#include <iostream>
//#include "stdlib.h"
////#include "math.h"
//
//using namespace std;
//
////�����ж�
//int CheckPrimeNumber(int n)
//{
//	if (n == 2)
//	{
//		return 1;
//	}
//	else if (n <= 1)
//	{
//		return 0;  //������0��1��������
//	}
//	else
//	{
//		//�ų�ż��
//		if (n % 2 == 0)
//		{
//			return 0;
//		}
//		//�����������ж�
//		else
//		{
//			for (int i = 3; i <= sqrt((double)n); i++)
//			{
//				if (n%i == 0)
//				{
//					return 0;
//				}
//			}
//			return 1;
//		}
//	}
//}
//int main()
//{
//	//std::cout << "Hello World!\n"; 
//	//system("pause");
//	int num = 100;
//	int PrimeNubmerSum = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		//�����ж�
//		if (CheckPrimeNumber(i) == 1)
//		{
//			//��ӡ����
//			cout << "the number is:" << i << endl;
//			PrimeNubmerSum++;
//		}
//	}
//	//��ӡ����
//	cout << "the sum is:" << PrimeNubmerSum << endl;
//
//	system("pause");
//	return 0;
//
//}

//������
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

//�ж����������Ƿ�Ϊ����
//����ֵ
//0:������
//1:����

int checkPrimeNumber(int i) {

	int n = 2;

	for (n; n <= sqrt(i); n++) {

		if (i % n == 0) {

			return 0;
		}
	}
	return 1;

}

int main()
{

	int totalNum = 100;

	for (int i = 2; i < totalNum; i++) {

		//�ж�����
		int res = checkPrimeNumber(i);

		if (res == 1) {

			cout << "the number is:" << i << endl;

		}

	}
	system("pause");

	return 0;
}