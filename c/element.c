	#include<stdio.h>
	#include<string.h>
	typedef struct
	{
	 int atno;
	 char name[20];
	 char symbol[5];
	 char class[15];
	 float atwt;
	 int electrons;
	}element
	  void read(FILE *fp1, int n);
	  void search(FILE *fp1, int n);
	  void sort(FILE *fp1, int n);


	main()
	{
	  FILE *fp1, *fp2;
	  int i,j,n=10;
	  char ch;
	  element t[10],temp;
	  char a[10];
	  fp1=fopen("PT.txt","r");
	  fp2=fopen("output.txt","w");
	  read(fp1,n);
	  search(fp1,n);
	  sort(f1,n);
	  }
	  void read(FILE *fp1,int n)
	{  
	   for(i=0;i<n;i++)
	    {
	     fscanf(fp1,"%d  %s  %s %s %f %d",&ti].atno,t[i].name,t[i].symbol,t[i].class,&t[i].atwt,&t[i].electrons);
	}
	}



	  void search(FILE *fp1, int n)
	 { int pos;
	    printf("enter the name of the elment that has to be searched");
	    scanf("%s",a);
	    for(i=0;i<n;i++)
	{
	   if(strcmp(t[i].name==a))
	   {  i=pos;
	     printf("%d  %s  %s %s %f %d",t[pos].atno,t[pos].name,t[pos].symbol,t[pos].class,t[pelseos].atwt,t[pos].electrons); 
	  }
	  }
	  else 
	  {  printf("the given element is not found");
	 }
	}
	   
	   void sort(FILE *fp1, int n)
	   {   char ch;
	      for(i=0;i<,,n;i++)
	{ 
		 for(j=0;j<n-1-i;j++)
	{ 
		   if(t[j].electrons>t[j+1].electrons) 
	{             t[j]=temp;
		      t[j]=t[j+1];
		      temp=t[j+1];
	}
	}
	}
		  while((ch=fp1)!=EOF)
		{
		fp2=fputc(ch,fp1);

	}
	  fcloseall();
	}       































