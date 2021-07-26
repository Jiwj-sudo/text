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
	char id[13];				//学号
	char name[9];				//姓名
	struct date birthday;		//生日	
	char sex[3];					//性别
	char sfzh[19];				//身份证号
	char address[61];			//家庭住址
	char telNumber[12];			//电话号码
	char className[21];			//班级名称
}Stu;

int main()
{
	Stu s1 = { "202026203002", "纪伟军", {20001, 2, 18}, "男", "362322200002186617", 
				"南昌市东湖区", "18470137121", "数据科学与大数据技术" };
	cout << "学    号:" << s1.id << endl;
	cout << "姓    名:" << s1.name << endl;
	cout << "出生日期:" << s1.birthday.year << "-" << s1.birthday.month << "-" << s1.birthday.day << endl;
	cout << "性    别:" << s1.sex << endl;
	cout << "身份证号:" << s1.sfzh << endl;
	cout << "电话号码:" << s1.telNumber << endl;
	cout << "家庭住址:" << s1.address << endl;
	return 0;
}