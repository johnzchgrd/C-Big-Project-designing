#include "stdio.h"
#define N 4			/*������ų���N����4*/
#define M 5			/*������ų���M����5*/
main()
{  int select;   
   int score[N][M],i,j,aver,num;
   printf("           ��ӭʹ��ѧ����ѯϵͳ!\n\n");
   while (1)              	          /*�˵�ѭ����ʾ�͹���ѭ������*/                    
   {  /*�˵���ʾ*/
	  printf("* * * * * * * * * * * * * * * * * * * * * *\n");
      printf("*            ��ѡ���ѯ����:              *\n");
      printf("* 1.ѧ�Ų�ѯ                              *\n");
	  printf("* 2.�γ̴��Ų�ѯ                          *\n");
      printf("* 3.ѧ�źͿγ̴��Ų�ѯ                    *\n");
      printf("* 4.ԭʼ����                              *\n");
      printf("* 5.�˳�                                  *\n");
      INPUT:
      printf("* * * * * * * * * * * * * * * * * * * * * *\n");
      printf("          ��ѡ���ܺ�1��5: ");
      scanf("%d",&select);
      if(select==5)		/*�˳�ϵͳ*/
         break;
      if(select>=6||select<=0)		    /*���빦�ܺ�������*/
	  {  printf("* * * �������������¹��ܺ�1-5��* * *\n");
         goto INPUT;
	  }
	  aver=0;
switch(select)
	  {  case 1:				   /*��ѧ�Ų�ѯ����*/
         printf("�������ѯѧ����ѧ��\n");
	     scanf("%d",&num);
	     for(i=0;i<N;i++)
			if(num==score[i][0])
			   for(j=1;j<M;j++)
			   {  printf("%d�ſγ̳ɼ���%d\n",j,score[i][j]);
				  aver+=score[i][j];
			   }
	     printf("%d��ѧ����ƽ���ɼ�Ϊ%d\n",num,aver/(M-1));
	     break;
case 2:				/*���γ̲�ѯ����*/
	     printf("�������ѯ�γ̵Ĵ���(1-%d)��\n",M-1);
	     scanf("%d",&j);
	     for(i=0;i<N;i++)
		 {  printf("%d��ѧ���ĳɼ�Ϊ%d\n",i+1,score[i][j]);
	        aver+=score[i][j];
		 }
	     printf("%d�ſγ̵�ƽ���ɼ�Ϊ%d\n",j,aver/N);
	     break;
case 3:				/*��ѧ�źͿγ̲�ѯ����*/
	     printf("�������ѯ��ѧ��ѧ�źͿγ̴��ţ�\n");
	     scanf("%d%d",&num,&j);
		 for(i=0;i<N;i++)
			 if(num==score[i][0])
			    printf("%d��ѧ��%d�ſγ̳ɼ�Ϊ%d\n",num,j,score[i][j]);
	     break;
case 4:					/*����ѧ��ԭʼ����*/
	     printf("����������%d��ѧ����%d�ųɼ�(ѧ�š����ųɼ���\n",N,M-1);
	     for(i=0;i<N;i++)
	        for(j=0;j<M;j++)
	           scanf("%d",&score[i][j]);
	     break;
         default:break;	  }   }	}

         

