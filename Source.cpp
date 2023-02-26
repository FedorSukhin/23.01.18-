#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <vector>
#include <string>//!!!
#include <algorithm>
#include <ctime>
using namespace  std;

enum Color { Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };

enum Direction { Up = 72, Left = 75, Right = 77, Down = 80, Enter = 13, esc = 27 };
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//�������� ���������� ��������� ����

void SetColor(Color text, Color background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void SetCursor(int x, int y)
{
	COORD myCoords = { x,y };//�������������� ������������� ���������� ������ ���������
	SetConsoleCursorPosition(hStdOut, myCoords);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//tm* timeinfo;
	//time_t rtime;//���������� �������������� ����
	//time(&rtime);//�������� ������� ���� � ���� ������ �����
	//timeinfo=localtime(&rtime);//�������� ������� ���� � ���� ������� ���������
	//cout << timeinfo->tm_wday << "\n";
	//cout << timeinfo->tm_year+1900 << "\n";
	//cout << asctime(timeinfo) << "\n";


	//timeinfo->tm_mday = 20;
	//mktime(timeinfo);//������������� ��������� ���� ��������� �� ��������� �������� ���������
	//cout << asctime(timeinfo) << "\n";

//1.������� ������� ���� �������� �� ������ ����.
	/*tm* timeinfo;

	time_t rtime;
	time(&rtime);
	timeinfo = localtime(&rtime);
	int currentDay = timeinfo->tm_yday;
	timeinfo->tm_mon = 11;
	timeinfo->tm_mday = 31;
	mktime(timeinfo);
	int newYear = timeinfo->tm_yday;
	cout << newYear << "\n";
	cout<<newYear - currentDay<<" ���� �� ������ ����!"<<"\n";*/

	//2.������� ������� ���� �������� �� ��� �������� ������������. ���� �� ��� ��� � ���� ���� - 
	//������� ��������� � ��������, ��� �� ����� � ��������� ����.
	/*int day, month, currentDay, birthDay, res;
	cout << "������� ���� ���� ��������: \n";
	cout << "����: ";
	cin >> day;
	cout << "�����: ";
	cin >> month;

	tm* timeinfo;
	time_t rtime;
	time(&rtime);
	timeinfo = localtime(&rtime);
	currentDay = timeinfo->tm_yday;
	timeinfo->tm_mday = day;
	timeinfo->tm_mon = month - 1;
	mktime(timeinfo);
	birthDay = timeinfo->tm_yday;
	res = birthDay - currentDay;
	if (res > 0)
	{
		cout << "�� ��� �������� �������� " << res << " ����.\n";
	}
	else if (res == 0)
	{
		cout << "� �� ������.\n";
	}
	else
	{
		cout << "���� �������� � ��������� ����.\n";
	}*/
	//3. ������������ ��������� ���. ������� ��� ������� 13-� � ���� ����. ��������� �������� � ���� ������� ���.
	/*int year, month, day;

	cout << "������� ���: ";
	cin >> year;
	tm* timeinfo;
	vector<tm> vect;
	time_t rtime;
	time(&rtime);
	timeinfo = localtime(&rtime);
	timeinfo->tm_year = year-1900;
	timeinfo->tm_mon = 0;
	timeinfo->tm_mday = 13;
	mktime(timeinfo);
	do
	{
		if (timeinfo->tm_wday == 5)
		{
			vect.push_back(*timeinfo);
		}
		timeinfo->tm_mon++;
		mktime(timeinfo);
	} while (timeinfo->tm_mon < 11);
	cout << "\n\n";
	for (auto var : vect)
	{
		cout << asctime(&var) << "\n";
	}*/
	//4. ������� ����� ���� ������ ��� 100 ���� �����.
	//tm* timeinfo;	
	//time_t rtime;
	//time(&rtime);
	//timeinfo = localtime(&rtime);
	//timeinfo->tm_mday-=100;
	//mktime(timeinfo);
	//cout<< asctime(timeinfo);

	//5. ������������ ��������� ���, ����� � ����. ����� ���������� ����� ��� ��� ���� ������. 
		//� ����� ��� �������/���������/�������
	/*int year, month, day;
	cout << "������� ���: ";
	cin >> year;
	cout << "������� ����� � ������: ";
	cin >> month;
	cout << "������� ����: ";
	cin >> day;
	tm* timeinfo;
	time_t rtime;
	time(&rtime);
	timeinfo = localtime(&rtime);
	tm* temp;
	time_t temptime;
	time(&temptime);
	temp = localtime(&temptime);
	temp->tm_year = year - 1900;
	temp->tm_mday = day;
	temp->tm_mon = month-1;
	mktime(temp);
	string wd[7] = { "�����������","�������","�����","�������" ,"�������","�������","�����������" };
	cout << wd[temp->tm_wday-1]<<endl;
	if (timeinfo > temp)cout << "��� �������";
	else if (timeinfo < temp)cout << "��� �������";
	else cout << "��� ���������";*/

	//6*. ������������ ��������� ��� ����. ����� ���������� ������� ����� ����. 
	//������� ������ ������������� � ������� ���: �����: ����
	//int year, month, day, year2, month2, day2;
	////cout << "������� ��� ������ ����: ";
	////cin >> year;
	////cout << "������� ����� ������ ���� � ������: ";
	////cin >> month;
	////cout << "������� ���� ������ ����: ";
	////cin >> day;
	////cout << "������� ��� ������ ����: ";
	////cin >> year2;
	////cout << "������� ����� ������ ���� � ������: ";
	////cin >> month2;
	////cout << "������� ���� ������ ����: ";
	////cin >> day2;
	//tm* time1;
	//time_t rtime;
	//time(&rtime);
	//time1 = localtime(&rtime);
	//time1->tm_year = 90;// year-1900;
	//time1->tm_mon = 3;//month - 1;
	//time1->tm_mday = 6;//day;
	//mktime(time1);
	///*int firstday = time1->tm_yday;
	//cout << firstday<<endl;*/
	//tm* time2;
	//time_t temptime;
	//time(&temptime);
	//time2 = localtime(&temptime);
	//time2->tm_year = 88;//year2-1900;
	//time2->tm_mon = 9;//month2 - 1;
	//time2->tm_mday = 2;//day2;
	//mktime(time2);
	////time1->tm_yday -= time2->tm_yday;
	//int secondday = time2->tm_yday;
	//cout << secondday << endl;
	//mktime(time2);
	////cout << firstday - secondday << endl;
	//cout << time2->tm_yday<<endl;
	//if (time2 < time1)
	//{
	//	swap(time1, time2);
	//}
	//else 
	//{
	//	if (time1->tm_year = time2->tm_year)
	//	{
	//		time2->tm_mday -= time1->tm_mday;
	//	}
	//}mktime(time2);
	//cout << asctime(time2);
	///*temp -= timeinfo;*/
	
	//7. ������������ ������ ���� ���������� �����. ������� �� ����, ���������� ������������� � �� �������� ����	
	/*int year, month, day;
	cout << "������� ���: ";
	cin >> year;
	tm* timeinfo;
	vector<int> vect;
	time_t rtime;
	time(&rtime);
	timeinfo = localtime(&rtime);
	int yearnow=timeinfo->tm_year;
	timeinfo->tm_year = year - 1900;
	cout << asctime(timeinfo);
	mktime(timeinfo);
	do
	{
		if (timeinfo->tm_year % 4 == 0)
		{
			vect.push_back(timeinfo->tm_year+1900);
		}
		timeinfo->tm_year++;
		mktime(timeinfo);
		} while (timeinfo->tm_year < yearnow);
	cout << "\n\n";
	for (auto var : vect)
	{
		cout << var << "\n";
	}
	return 0;*/
}