#include"student.h"

void main()				/*������*/
{ 
	system("color f0\n");	//�׵׺���
	int n;
  	menu();
  	scanf("%d",&n);/*����ѡ���ܵı��*/
  	while(n)
  	{ 
	  	switch(n)
     	{ 
		 	case 1: in();break;
       		case 2: search();break;
       		case 3: del();break;
       		case 4: modify();break;
       		case 5: insert();break;
       		case 6: order();break;
       		case 7: total();break;
	   		case 8: show();break;
       		default:
			   printf("Invalid number!\n");
			   break;
     	}
    getch();
    menu();/*ִ���깦���ٴ���ʾ�˵�����*/
    scanf("%d",&n);
  	}
}



