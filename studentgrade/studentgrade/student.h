#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define LEN sizeof(struct student)
#define FORMAT "%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n"
#define DATA stu[i].num,stu[i].name,stu[i].elec,stu[i].expe,stu[i].requ,stu[i].sum
/**
*  �� �� ��
*/
struct student/*����ѧ���ɼ��ṹ��*/
{ 
	int num;		/*ѧ��*/
  	char name[15];	/*����*/
  	double elec;	/*ѡ�޿�*/
  	double expe;	/*ʵ���*/
  	double requ;	/*���޿�*/
  	double sum;		/*�ܷ�*/
};
struct student stu[50];	/*����ṹ������*/
/**
*  ��������
*/

void in();				/*¼��ѧ���ɼ���Ϣ*/
void show();			/*��ʾѧ����Ϣ*/
void order();			/*���ܷ�����*/
void del();				/*ɾ��ѧ���ɼ���Ϣ*/
void modify();			/*�޸�ѧ���ɼ���Ϣ*/
void menu();			/*���˵�*/
void insert();			/*����ѧ����Ϣ*/
void total();			/*����������*/
void search();			/*����ѧ����Ϣ*/
