void in()/*¼��ѧ����Ϣ*/
{ 
	int i,m=0;/*m�Ǽ�¼������*/
  	char ch[2];
  	FILE *fp;/*�����ļ�ָ��*/
  	if((fp=fopen("data.txt","a+"))==NULL)/*��ָ���ļ�*/
  	{ 
	  	printf("�ļ������ڣ�\n");
	  	return;
  	}
  	while(!feof(fp))
  	{
	  	if(fread(&stu[m] ,LEN,1,fp)==1)
	  	{
		  	m++;/*ͳ�Ƶ�ǰ��¼����*/
		}
  	}
  	fclose(fp);
  	if(m==0)
  	{
	  	printf("�ļ���û�м�¼!\n");
	}
  	else
  	{	  	
        show();/*����show��������ʾԭ����Ϣ*/
  	}
  	if((fp=fopen("data.txt","w"))==NULL)
  	{
	  	printf("�ļ������ڣ�\n");
	  	return;
 	 }


  	printf("����ѧ����Ϣ(y/n):");
  	scanf("%s",ch);
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)/*�ж��Ƿ�Ҫ¼������Ϣ*/
	{
    	printf("number:");
		scanf("%d",&stu[m].num);/*����ѧ��ѧ��*/
    	for(i=0;i<m;i++)
	    	if(stu[i].num==stu[m].num)
	    	{
	   			printf("number�Ѿ������ˣ������������!");
	    		getch();
	    		fclose(fp);
	    		return;
	    	}
     	printf("name:");
	 	scanf("%s",stu[m].name);/*����ѧ������*/
     	printf("optional class grade:");
    	scanf("%lf",&stu[m].elec);/*����ѡ�޿γɼ�*/
     	printf("experiment class grade:");
	 	scanf("%lf",&stu[m].expe);/*����ʵ��γɼ�*/
     	printf("required course grade:");
	 	scanf("%lf",&stu[m].requ);/*������޿γɼ�*/
     	stu[m].sum=stu[m].elec+stu[m].expe+stu[m].requ;/*������ܳɼ�*/
     	if(fwrite(&stu[m],LEN,1,fp)!=1)/*����¼�����Ϣд��ָ���Ĵ����ļ�*/
     	{
		 	printf("���ܱ���!");
		 	getch();
	 	}
     	else
	 	{
		 	printf("%s ������!\n",stu[m].name);
		 	m++;
	 	}
     	printf("����?(y/n):");/*ѯ���Ƿ����*/
     	scanf("%s",ch);
  	}
  	fclose(fp);
  	printf("OK!\n");
}

