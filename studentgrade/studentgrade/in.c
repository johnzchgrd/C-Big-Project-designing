void in()/*录入学生信息*/
{ 
	int i,m=0;/*m是记录的条数*/
  	char ch[2];
  	FILE *fp;/*定义文件指针*/
  	if((fp=fopen("data.txt","a+"))==NULL)/*打开指定文件*/
  	{ 
	  	printf("文件不存在！\n");
	  	return;
  	}
  	while(!feof(fp))
  	{
	  	if(fread(&stu[m] ,LEN,1,fp)==1)
	  	{
		  	m++;/*统计当前记录条数*/
		}
  	}
  	fclose(fp);
  	if(m==0)
  	{
	  	printf("文件中没有记录!\n");
	}
  	else
  	{	  	
        show();/*调用show函数，显示原有信息*/
  	}
  	if((fp=fopen("data.txt","w"))==NULL)
  	{
	  	printf("文件不存在！\n");
	  	return;
 	 }


  	printf("输入学生信息(y/n):");
  	scanf("%s",ch);
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)/*判断是否要录入新信息*/
	{
    	printf("number:");
		scanf("%d",&stu[m].num);/*输入学生学号*/
    	for(i=0;i<m;i++)
	    	if(stu[i].num==stu[m].num)
	    	{
	   			printf("number已经存在了，按任意键继续!");
	    		getch();
	    		fclose(fp);
	    		return;
	    	}
     	printf("name:");
	 	scanf("%s",stu[m].name);/*输入学生姓名*/
     	printf("optional class grade:");
    	scanf("%lf",&stu[m].elec);/*输入选修课成绩*/
     	printf("experiment class grade:");
	 	scanf("%lf",&stu[m].expe);/*输入实验课成绩*/
     	printf("required course grade:");
	 	scanf("%lf",&stu[m].requ);/*输入必修课成绩*/
     	stu[m].sum=stu[m].elec+stu[m].expe+stu[m].requ;/*计算出总成绩*/
     	if(fwrite(&stu[m],LEN,1,fp)!=1)/*将新录入的信息写入指定的磁盘文件*/
     	{
		 	printf("不能保存!");
		 	getch();
	 	}
     	else
	 	{
		 	printf("%s 被保存!\n",stu[m].name);
		 	m++;
	 	}
     	printf("继续?(y/n):");/*询问是否继续*/
     	scanf("%s",ch);
  	}
  	fclose(fp);
  	printf("OK!\n");
}

