#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;

struct date
{
	int year;
	int month;
	int day;
};

typedef struct Student
{
	char id[13];				//ѧ��
	char name[9];				//����
	struct date birthday;		//����	
	char sex[3];					//�Ա�
	char sfzh[19];				//���֤��
	char address[61];			//��ͥסַ
	char telNumber[12];			//�绰����
	char className[21];			//�༶����
}Stu;

int main()
{
	Stu s1 = { "202026203002", "��ΰ��", {20001, 2, 18}, "��", "362322200002186617", 
				"�ϲ��ж�����", "18470137121", "���ݿ�ѧ������ݼ���" };
	cout << "ѧ    ��:" << s1.id << endl;
	cout << "��    ��:" << s1.name << endl;
	cout << "��������:" << s1.birthday.year << "-" << s1.birthday.month << "-" << s1.birthday.day << endl;
	cout << "��    ��:" << s1.sex << endl;
	cout << "���֤��:" << s1.sfzh << endl;
	cout << "�绰����:" << s1.telNumber << endl;
	cout << "��ͥסַ:" << s1.address << endl;
	return 0;
}