#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define LEN sizeof(struct student)
#define FORMAT "%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n"
#define DATA stu[i].num,stu[i].name,stu[i].elec,stu[i].expe,stu[i].requ,stu[i].sum
/**
*  结 构 体
*/
struct student/*定义学生成绩结构体*/
{ 
	int num;		/*学号*/
  	char name[15];	/*姓名*/
  	double elec;	/*选修课*/
  	double expe;	/*实验课*/
  	double requ;	/*必修课*/
  	double sum;		/*总分*/
};
struct student stu[50];	/*定义结构体数组*/
/**
*  函数声明
*/

void in();				/*录入学生成绩信息*/
void show();			/*显示学生信息*/
void order();			/*按总分排序*/
void del();				/*删除学生成绩信息*/
void modify();			/*修改学生成绩信息*/
void menu();			/*主菜单*/
void insert();			/*插入学生信息*/
void total();			/*计算总人数*/
void search();			/*查找学生信息*/
