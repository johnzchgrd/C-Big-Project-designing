#include"student.h"

void main()				/*主函数*/
{ 
	system("color f0\n");	//白底黑字
	int n;
  	menu();
  	scanf("%d",&n);/*输入选择功能的编号*/
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
    menu();/*执行完功能再次显示菜单界面*/
    scanf("%d",&n);
  	}
}



