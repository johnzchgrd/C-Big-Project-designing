#include "stdio.h"
#define N 4			/*定义符号常量N等于4*/
#define M 5			/*定义符号常量M等于5*/
main()
{  int select;   
   int score[N][M],i,j,aver,num;
   printf("           欢迎使用学生查询系统!\n\n");
   while (1)              	          /*菜单循环显示和功能循环处理*/                    
   {  /*菜单显示*/
	  printf("* * * * * * * * * * * * * * * * * * * * * *\n");
      printf("*            请选择查询对象:              *\n");
      printf("* 1.学号查询                              *\n");
	  printf("* 2.课程代号查询                          *\n");
      printf("* 3.学号和课程代号查询                    *\n");
      printf("* 4.原始数据                              *\n");
      printf("* 5.退出                                  *\n");
      INPUT:
      printf("* * * * * * * * * * * * * * * * * * * * * *\n");
      printf("          请选择功能号1—5: ");
      scanf("%d",&select);
      if(select==5)		/*退出系统*/
         break;
      if(select>=6||select<=0)		    /*输入功能号有误处理*/
	  {  printf("* * * 输入有误，请重新功能号1-5：* * *\n");
         goto INPUT;
	  }
	  aver=0;
switch(select)
	  {  case 1:				   /*按学号查询功能*/
         printf("请输入查询学生的学号\n");
	     scanf("%d",&num);
	     for(i=0;i<N;i++)
			if(num==score[i][0])
			   for(j=1;j<M;j++)
			   {  printf("%d号课程成绩是%d\n",j,score[i][j]);
				  aver+=score[i][j];
			   }
	     printf("%d号学生的平均成绩为%d\n",num,aver/(M-1));
	     break;
case 2:				/*按课程查询功能*/
	     printf("请输入查询课程的代号(1-%d)：\n",M-1);
	     scanf("%d",&j);
	     for(i=0;i<N;i++)
		 {  printf("%d号学生的成绩为%d\n",i+1,score[i][j]);
	        aver+=score[i][j];
		 }
	     printf("%d号课程的平均成绩为%d\n",j,aver/N);
	     break;
case 3:				/*按学号和课程查询功能*/
	     printf("请输入查询的学生学号和课程代号：\n");
	     scanf("%d%d",&num,&j);
		 for(i=0;i<N;i++)
			 if(num==score[i][0])
			    printf("%d号学生%d号课程成绩为%d\n",num,j,score[i][j]);
	     break;
case 4:					/*输入学生原始数据*/
	     printf("请依次输入%d个学生的%d门成绩(学号、各门成绩）\n",N,M-1);
	     for(i=0;i<N;i++)
	        for(j=0;j<M;j++)
	           scanf("%d",&score[i][j]);
	     break;
         default:break;	  }   }	}

         

