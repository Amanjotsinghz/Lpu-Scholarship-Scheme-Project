#include<stdio.h>
#include<conio.h>
main()
{
printf("\n                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
printf("\n                                      @                                  @");
printf("\n                                      @                                  @");
printf("\n                                      @     LPU SCHOLARSHIP SCHEME       @");
printf("\n                                      @                                  @");
printf("\n                                      @                                  @");
printf("\n                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
int a,h,de,dee,A;
float f,d,e,g,b,c;
char x[100],y[100],z[100];
printf("\n\nEnter your name--");
gets(x);
gets(y);
printf("\n");
printf("Programs after 12\n");
printf("\n\nPress 1 for maths stream");
printf("\n\nPress 2 for biology stream");
printf("\n\nPress 3 for commerce stream");
scanf("%d",&a);
switch(a)
{
case 1:
	{
printf("\n\nEnter your maths marks--");
aa:scanf("%f",&b);
if (b>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto aa;
}
printf("\nEnter your physics marks--");
bb:scanf("%f",&c);
if (c>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto bb;
}
printf("\nEnter your chemistry marks--");
cc:scanf("%f",&d);
if (d>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto cc;
}
printf("\nEnter your english marks--");
dd:scanf("%f",&e);
if (e>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto dd;
}
break;
}
case 2:
	{
	printf("\nEnter your biology marks--");
aaa:scanf("%f",&b);
if (b>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto aaa;
}
printf("Enter your physics marks--");
bbb:scanf("%f",&c);
if (c>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto bbb;
}
printf("Enter your chemistry marks--");
ccc:scanf("%f",&d);
if (d>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto ccc;
}
printf("Enter your english marks--");
ddd:scanf("%f",&e);
if (e>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto ddd;}
break;
}
case 3:
	{
	printf("Enter your maths marks--");
xx:scanf("%f",&b);
if (b>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto xx;
}
printf("\nEnter your economics marks--");
yy:scanf("%f",&c);
if (c>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto yy;
}
printf("\nEnter your accountacy marks--");
zz:scanf("%f",&d);
if (d>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto zz;
}
printf("\nEnter your english marks--");
qq:scanf("%f",&e);
if (e>100)
{
printf("Max marks is 100\n");
printf("Enter again\n ");
goto qq;
}
break;
}
}//switch closed
e=b+c+d+e;
printf("Your total marks=%f  \n",e);
f=e/4;
printf("Your percentage is %.2f ",f);
if (a==1)
{	if (f<40)
	printf("\nYou are not eligible for any program\n:");
  else if(f>40&&f<=50)
  {
  	printf("\nYou got no scholarship according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&h);
  	switch(h)
  	{
	  case 1:
	  	{
		  printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc electronic media");
		
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
				printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi");
					break;
					}
		 
	  }
	  
  }
  else if (f>50&&f<=60)
   {printf("\nYou got scholarship of 10000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A Courses\n5--Engineering Courses\n6--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&de);
  	switch(de)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc Electronic Media\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing");
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
				printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology");
					break;
					}
					case 5:
						{printf("\nYou are eligible for following courses\n");
						printf("B.Tech in \n");
						printf("1-Food tech\n2-Agriculture\n3-Metallargy\n4-Chemical Engineering");
						break;
						}
						case 6:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Engineering studies \n2-Business studies \n3-Art Studies \n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
  else if (f>60&&f<=70)
   {printf("\nYou got scholarship of 20000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A Courses\n5--Engineering Courses\n6--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc Electronic Media\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Computer Science\n10-B.Sc Agriculture");
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 5:
						{printf("\nYou are eligible for following courses\n");
						printf("B.Tech in \n");
						printf("1-Food tech\n2-Agriculture\n3-Metallargy\n4-Chemical\n5-Civil\n6-Electronics \n7-Aeronautics ");
						break;
						}
						case 6:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Engineering studies \n2-Business studies \n3-Art Studies \n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
  else if (f>70&&f<=80)
  {printf("\nYou got scholarship of 40000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A Courses\n5--Engineering Courses\n6--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc Electronic Media\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Computer Science\n10-B.Sc Agriculture");
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 5:
						{printf("\nYou are eligible for following courses\n");
						printf("B.Tech in \n");
						printf("1-Food tech\n2-Agriculture\n3-Metallargy\n4-Chemical\n5-Civil\n6-Electronics \n7-Aeronautics\n8-Mechanical\n9-Computer Science\n10-Petroleum ");
						break;
						}
						case 6:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Engineering studies \n2-Business studies \n3-Art Studies \n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
   else if (f>80&&f<=90)
  {printf("\nYou got scholarship of 50000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A Courses\n5--Engineering Courses\n6--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc Electronic Media\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Computer Science\n10-B.Sc Agriculture");
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 5:
						{printf("\nYou are eligible for following courses\n");
						printf("B.Tech in \n");
						printf("1-Food tech\n2-Agriculture\n3-Metallargy\n4-Chemical\n5-Civil\n6-Electronics \n7-Aeronautics\n8-Mechanical\n9-Computer Science\n10-Petroleum ");
						break;
						}
						case 6:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Engineering studies \n2-Business studies \n3-Art Studies \n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
   else 
  {printf("\nYou got scholarship of 600000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.C.A.\n3--B.B.A.\n4--B.A Courses\n5--Engineering Courses\n6--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc IT\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Visual media\n5-B.Sc Electronic Media\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Computer Science\n10-B.Sc Agriculture");
		 break; }
		case 2:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 3:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 4:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 5:
						{printf("\nYou are eligible for following courses\n");
						printf("B.Tech in \n");
						printf("1-Food tech\n2-Agriculture\n3-Metallargy\n4-Chemical\n5-Civil\n6-Electronics \n7-Aeronautics\n8-Mechanical\n9-Computer Science\n10-Petroleum ");
						break;
						}
						case 6:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Engineering studies \n2-Business studies \n3-Art Studies \n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
}
else if (a==2)
{	if (f<40)
	printf("\nYou are not eligible for any program\n:");
  else if(f>40&&f<=50)
  {
  	printf("\nYou got no scholarship according to your percentage\n ");
  	printf("You are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2-B.A courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&h);
  	switch(h)
  	{
	  case 1:
	  	{
		  printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Hoticulture\n5-B.Sc Zoology");
		 break; }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi");
					break;
					}
		 }
	}
  else if (f>50&&f<=60)
   {printf("\nYou got scholarship of 10000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2--B.A Courses\n3--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&de);
  	switch(de)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Hoticulture\n5-B.Sc Zoology\n6B.Sc (PCB)\n7--B.Sc Forestry\n8--B.Sc Interior Designing");
		 break; 
		 }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology");
					break;
				}
				    case 3:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-A.N.M \n2-G.N.M \n3-\n4-D-Pharma");
							break;
							}
  }}
  else if (f>60&&f<=70)
   {printf("\nYou got scholarship of 20000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1-B.Sc.Courses\n2--B.A Courses\n3--Diploma Courses/n4--Biomedical Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Zoology\n5-B.Sc Hoticulture\n6B.Sc (PCM)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Computer Science\n10-B.Sc Agriculture");
		 break; }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
						case 3:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-A.N.M\n2-G.N.M \n3-D-Pharma\n4-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
  else if (f>70&&f<=80)
  {printf("\nYou got scholarship of 40000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.Sc.Courses\n2--B.A Courses\n3--Diploma Courses\n4--Biomedical Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Hoticulture\n5-B.Sc Zoology\n6B.Sc (PCB)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Agriculture");
		 break; }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
				case 3:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-A.N.M\n2-G.N.M \n3-D-Pharma\n4-Tourism and Hospitality");
							break;
							}
							case 4:
								{printf("\nYou are eligible for following courses\n");
								printf("1-B.Sc Nursing\n2-B-Pharma\n3-Biotechnology");
								break;
								}
		 
	  }
  }
   else if (f>80&&f<=90)
  {printf("\nYou got scholarship of 50000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.Sc.Courses\n2--B.A Courses\n3--Diploma Courses\n4--Biomedical Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Hoticulture\n5-B.Sc Zoology\n6B.Sc (PCB)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Agriculture");
		 break; }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
				case 3:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-A.N.M\n2-G.N.M \n3-D-Pharma\n4-Tourism and Hospitality");
							break;
							}
							case 4:
								{printf("\nYou are eligible for following courses\n");
								printf("1-B.Sc Nursing\n2-B-Pharma\n3-Biotechnology\n4M.B.B.S");
								break;
								}
		 
	  }
  } else 
  {printf("\nYou got scholarship of 600000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.Sc.Courses\n2--B.A Courses\n3--Diploma Courses\n4--Biomedical Courses\n5--M.B.B.S");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
	  	{printf("\nYou are eligible for following courses\n");
		 printf("1-B.Sc Botany\n2-B.Sc Hotel Management\n3-B.Sc Sports management\n4-B.Sc Hoticulture\n5-B.Sc Zoology\n6B.Sc (PCB)\n7--B.Sc Forestry\n8--B.Sc Interior Designing\n9--B.Sc Agriculture");
		 break; }
				case 2:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
				case 3:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-A.N.M\n2-G.N.M \n3-D-Pharma\n4-Tourism and Hospitality");
							break;
							}
							case 4:
								{printf("\nYou are eligible for following courses\n");
								printf("1-B.Sc Nursing\n2-B-Pharma\n3-Biotechnology\n4M.B.B.S");
								break;
								}
		 
	  }
  }
}
else 
{	if (f<40)
	printf("\nYou are not eligible for any program\n:");
  else if(f>40&&f<=50)
  {
  	printf("\nYou got no scholarship according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&h);
  	switch(h)
  	{
		case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
				printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi");
					break;
					}
		 
	  }
  }
  else if (f>50&&f<=60)
   {printf("\nYou got scholarship of 10000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A Courses\n4--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&de);
  	switch(de)
  	{
	  case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
				printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
					printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology");
					break;
					}
						case 4:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1-Business studies \n2-Art Studies \n3-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
  else if (f>60&&f<=70)
   {printf("\nYou got scholarship of 20000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A Courses\n4--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 4:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1--Business studies \n2-Art Studies \n3-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
  else if (f>70&&f<=80)
  {printf("\nYou got scholarship of 40000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A Courses\n4--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 4:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1--Business studies \n2-Art Studies \n3-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
   else if (f>80&&f<=90)
  {printf("\nYou got scholarship of 50000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A Courses\n4--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 4:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1--Business studies \n2-Art Studies \n3-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
   else 
  {printf("\nYou got scholarship of 600000 per semester according to your percentage ");
  	printf("\nYou are eligible for the following programs :\n");
  	printf("1--B.C.A.\n2--B.B.A.\n3--B.A Courses\n4--Diploma Courses");
  	printf("\nPress the number corresponding to the course to choose your course ");
  	scanf("%d",&dee);
  	switch(dee)
  	{
	  case 1:
			{printf("\nYou are eligible for B.C.A course. \n");
			break;}
			case 2:
				{printf("\nYou are eligible for following courses\n");
				printf("B.B.A in \n");
printf("1-Human Recources\n2-Marketing\n3-Hospitality and Tourism Management\n4-Family Business Management\n5-E-Banking and Finance\n6-Financial Markets\n7-Insurance & Risk Management\n8--Professionals\n9--Logistics & Supply Chain\n10--Insurance & Risk Management");
				break;
				}
				case 3:
					{printf("\nYou are eligible for following courses\n");
					printf("B.A in \n");
printf("1-Political science\n2-History \n3-Economics\n4-Journalism\n5-Sociology\n6-Geography\n7-Hindi\n8-Psycology/n9-LLB");
					break;
					}
					case 4:
							{printf("\nYou are eligible for following courses\n");
							printf("Diploma in \n");
							printf("1--Business studies \n2-Art Studies \n3-Tourism and Hospitality");
							break;
							}
		 
	  }
  }
}
if(a==1&&f>40&&f<=50&&h==1)
{printf("\nPress the number corresponding to the course to choose your course ");
scanf("%d",&A);
switch(A)
{
	case 1:
		{printf("You are selected for B.Sc IT.and you got no scholarship.");
		break;}
		case 2:
			{printf("You are selected for B.Sc Hotel Management and you got no scholarship.");
			break;}
			case 3:
				{printf("You are selected for B.Sc Sports Management and you got no scholarship.");
				break;}
				case 4:
				{printf("You are selected for B.Sc Visual media and you got no scholarship.");
				 break;} 
				 case 5:
				 	{printf("You are selected for B.Sc electronic media and you got no scholarship.");
				 	break;}
				 	
}
}
else if(a==1&&f>40&&f<=50&&h==2)
{	printf("\nYou are selected for B.C.A and you got no scholarship.");
}
else if(a==1&&f>40&&f<=50&&h==3)
{printf("\nPress the number corresponding to the course to choose your course ");
scanf("%d",&A);
switch(A)
{
	case 1:
		{printf("You are selected for Human Recources and you got no scholarship.");
		break;}
		case 2:
			{printf("You are selected for Marketing and you got no scholarship.");
			break;}
			case 3:
				{printf("You are selected for Hospitality and Tourism Management and you got no scholarship.");
				break;}
				case 4:
				{printf("You are selected for Family Business Management and you got no scholarship.");
				 break;} 
}
}
else 
{printf("\nPress the number corresponding to the course to choose your course ");
scanf("%d",&A);
switch(A)
{
	case 1:
		{printf("You are selected for Political science and you got no scholarship.");
		break;}
		case 2:
			{printf("You are selected for History and you got no scholarship.");
			break;}
			case 3:
				{printf("You are selected for Economics and you got no scholarship.");
				break;}
				case 4:
				{printf("You are selected for Journalism and you got no scholarship.");
				 break;} 
				 case 5:
				 	{printf("You are selected for Sociology and you got no scholarship.");
				 	break;}
				 	case 6:
				 		{printf("You are selected for Geography and you got no scholarship.");
						 break;}
						 case 7:
						 	{printf("You are selected for Hindi and you got no scholarship.");
							 break;}
}
}
}
