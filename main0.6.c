#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void func_choice();//��ѡ���� 
void func_switch();//choice�ں��� 
void func_welcome();
void func_test();//�������˳����� 
void title();
void death();
void begin();
void func_cname(); //�������֣���� 
void writefile();  //д���ļ������ڼ�¼���� 

void func_data(); //ÿ��ҳ���ṩ����

// ��Ҫ�����ṩ ѡ���Ӱ�� 
int q=0;
int i=0; 
int year=0;
int people=50; 
int military=50;
int religion=50; 
int money=50;
char name[10];

readfile()
{
	FILE *fp;
	fp=fopen("reignsuser.txt","r");
	if(fp==NULL)
		{
			fp=fopen("reignsuser.txt","w");
			if(fp==NULL)
				printf("ERROR \"reignsuser.txt\" ! \n"),exit(404);
			fprintf(fp," %d - ",600);
			fclose(fp);
			fp=fopen("reignsuser.txt","r");
		}
	fseek(fp,-2L*sizeof(int), SEEK_END); 
	fscanf(fp,"%d",&q);
	//printf("%d",q); 
    fclose(fp);
} 
writefile()
{
	FILE *fp;
	readfile();

	fp=fopen("reignsuser.txt","a+");
	if(fp==NULL)
		printf("ERROR \"reignsuser.txt\" ! \n"),exit(404);
	fprintf(fp,"%d King %s\t\tInplace time %d years\n %d - ",q+year,name,year,q+year);
	fclose(fp);
	
}

int getNextLinePos(FILE *p)//�����ƶ�һ�� ����δʹ�� 
{
	int ch;
	int curpos = 0;
	ch=getc(p);
	curpos = ftell(p);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=getc(p);
		if(ch == '\n')
		{
			break;
		}
	}
	return (ftell(p) - curpos + 1);
}



begin()
{
	int a;
	int b;
	a=300;
	b=200;
	puts("");
	puts(" ");
	puts(" ");
	puts(" "); 
	puts(" ");
	puts(" ");
	puts("");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ����������������");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ");
	puts(" ");
	puts(" "); 
	puts(" ");
	puts(" ");
	puts("");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts("                 ");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������");
	puts(" ����������������");
	puts(" ����        ����"); 
	puts(" ����        ����");
	puts(" ����        ����");
	puts(" ����������������");
	puts(" ����������������");
	puts(" ��������");
	puts(" ����  ����");
	puts(" ����    ����");
	puts(" ����      ����");
	puts(" ����      ����    ����������������");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������");
	puts(" ����������������");
	puts(" ����        ����"); 
	puts(" ����        ����");
	puts(" ����        ����");
	puts(" ����������������");
	puts(" ����������������");
	puts(" ��������");
	puts(" ����  ����");
	puts(" ����    ����");
	puts(" ����      ����");
	puts(" ����      ����");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ");
	puts(" ����������������  ����������������  ");
	puts(" ����        ����  ����              "); 
	puts(" ����        ����  ����              ");
	puts(" ����        ����  ����              ");
	puts(" ����������������  ��������������    ");
	puts(" ����������������  ��������������    ");
	puts(" ��������          ����              ");
	puts(" ����  ����        ����              ");
	puts(" ����    ����      ����              ");
	puts(" ����      ����    ����������������  ");
	puts(" ����      ����    ����������������  ����������������");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ");
	puts(" ����������������  ����������������  ");
	puts(" ����        ����  ����              "); 
	puts(" ����        ����  ����              ");
	puts(" ����        ����  ����              ");
	puts(" ����������������  ��������������    ");
	puts(" ����������������  ��������������    ");
	puts(" ��������          ����              ");
	puts(" ����  ����        ����              ");
	puts(" ����    ����      ����              ");
	puts(" ����      ����    ����������������  ");
	puts(" ����      ����    ����������������  ");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ���������������� ");
	puts(" ����������������  ����������������  ���������������� ");
	puts(" ����        ����  ����                    ����     "); 
	puts(" ����        ����  ����                    ����     ");
	puts(" ����        ����  ����                    ����     ");
	puts(" ����������������  ��������������          ����     ");
	puts(" ����������������  ��������������          ����     ");
	puts(" ��������          ����                    ����     ");
	puts(" ����  ����        ����                    ����     ");
	puts(" ����    ����      ����                    ����      ");
	puts(" ����      ����    ����������������  ���������������� ");
	puts(" ����      ����    ����������������  ����������������  ����������������");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ���������������� ");
	puts(" ����������������  ����������������  ���������������� ");
	puts(" ����        ����  ����                    ����     "); 
	puts(" ����        ����  ����                    ����     ");
	puts(" ����        ����  ����                    ����     ");
	puts(" ����������������  ��������������          ����     ");
	puts(" ����������������  ��������������          ����     ");
	puts(" ��������          ����                    ����     ");
	puts(" ����  ����        ����                    ����     ");
	puts(" ����    ����      ����                    ����      ");
	puts(" ����      ����    ����������������  ���������������� ");
	puts(" ����      ����    ����������������  ���������������� ");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ����������������  ����������������");
	puts(" ����������������  ����������������  ����������������  ����������������");
	puts(" ����        ����  ����                    ����        ����"); 
	puts(" ����        ����  ����                    ����        ����");
	puts(" ����        ����  ����                    ����        ����");
	puts(" ����������������  ��������������          ����        ����    ��������");
	puts(" ����������������  ��������������          ����        ����    ��������");
	puts(" ��������          ����                    ����        ����        ����");
	puts(" ����  ����        ����                    ����        ����        ����");
	puts(" ����    ����      ����                    ����        ����        ����");
	puts(" ����      ����    ����������������  ����������������  ����������������");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����������������");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ����������������  ����������������");
	puts(" ����������������  ����������������  ����������������  ����������������");
	puts(" ����        ����  ����                    ����        ����"); 
	puts(" ����        ����  ����                    ����        ����");
	puts(" ����        ����  ����                    ����        ����");
	puts(" ����������������  ��������������          ����        ����    ��������");
	puts(" ����������������  ��������������          ����        ����    ��������");
	puts(" ��������          ����                    ����        ����        ����");
	puts(" ����  ����        ����                    ����        ����        ����");
	puts(" ����    ����      ����                    ����        ����        ����");
	puts(" ����      ����    ����������������  ����������������  ����������������");
	puts(" ����      ����    ����������������  ����������������  ����������������");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ");
	puts(" ����        ����  ����                    ����        ����              ������      ����  "); 
	puts(" ����        ����  ����                    ����        ����              ������      ����  ");
	puts(" ����        ����  ����                    ����        ����              ��������    ����  ");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����  ");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����  ");
	puts(" ��������          ����                    ����        ����        ����  ����    ��������  ");
	puts(" ����  ����        ����                    ����        ����        ����  ����    ��������  ");
	puts(" ����    ����      ����                    ����        ����        ����  ����      ������  ");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����      ������  ");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����        ����  ����������������");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ");
	puts(" ����        ����  ����                    ����        ����              ������      ����  "); 
	puts(" ����        ����  ����                    ����        ����              ������      ����  ");
	puts(" ����        ����  ����                    ����        ����              ��������    ����  ");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����  ");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����  ");
	puts(" ��������          ����                    ����        ����        ����  ����    ��������  ");
	puts(" ����  ����        ����                    ����        ����        ����  ����    ��������  ");
	puts(" ����    ����      ����                    ����        ����        ����  ����      ������  ");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����      ������  ");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����        ����  ");
	Sleep(a);
	system("CLS");
	title();
	Sleep(1000);
}
title()
{
	puts("");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ����������������");
	puts(" ����������������  ����������������  ����������������  ����������������  ����        ����  ����������������");
	puts(" ����        ����  ����                    ����        ����              ������      ����  ����"); 
	puts(" ����        ����  ����                    ����        ����              ������      ����  ������");
	puts(" ����        ����  ����                    ����        ����              ��������    ����    ������");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����      ������");
	puts(" ����������������  ��������������          ����        ����    ��������  ����  ����  ����        ������ ");
	puts(" ��������          ����                    ����        ����        ����  ����    ��������        ��������    ");
	puts(" ����  ����        ����                    ����        ����        ����  ����    ��������          ��������  ");
	puts(" ����    ����      ����                    ����        ����        ����  ����      ������  ����      ������");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����      ������  ����������������");
	puts(" ����      ����    ����������������  ����������������  ����������������  ����        ����  ����������������");
}
death()
{
	puts("");
	puts(" ����        ����  ����������������  ����        ����     ��������������    ����������������  ���������������� ");
	puts(" ����        ����  ����������������  ����        ����     ����������������  ����������������  ���������������� ");
	puts(" ����        ����  ����        ����  ����        ����     ����        ����        ����        ����             "); 
	puts(" ����        ����  ����        ����  ����        ����     ����        ����        ����        ����             ");
	puts("   ����    ����    ����        ����  ����        ����     ����        ����        ����        ����             ");
	puts("   ������������    ����        ����  ����        ����     ����        ����        ����        ���������������� ");
	puts("     ��������      ����        ����  ����        ����     ����        ����        ����        ���������������� ");
	puts("     ��������      ����        ����  ����        ����     ����        ����        ����        ����             ");
	puts("       ����        ����        ����  ����        ����     ����        ����        ����        ����             ");
	puts("       ����        ����        ����  ����        ����     ����        ����        ����        ����             ");
	puts("       ����        ����������������  ����������������     ����������������  ����������������  ���������������� ");
	puts("       ����        ����������������  ����������������     ��������������    ����������������  ���������������� ");
	puts("=================================================================================");
	if(money<=0)
		printf("�µĹ�ͷ������������.");
	if(military<=0 && people >=20)
		printf("��ı������ڱ����������ս�����������ǰ.");
	if(military<=0 && people <20) 
		printf("��ı������ڱ������㱻��ɱ�ڹ�����.");
	if(people<=0)
		printf("������񼢺����ȣ�������.");
	if(religion<=0)
		printf("��������������㣬�̻��齨���µ�����.");
}
func_cname()
{	
	
	//strcpy(name, "hello"); 
	srand(time(NULL));
	int w;
		w = rand()%31;
	switch(w)
	{
		case  1:strcpy(name, "Abraham");break;
		case  2:strcpy(name, "Albert");break;
		case  3:strcpy(name, "Brandon");break;
		case  4:strcpy(name, "Cameron");break;
		case  5:strcpy(name, "Cheney");break;
		case  6:strcpy(name, "Derek");break;
		case  7:strcpy(name, "Ethan");break;
		case  8:strcpy(name, "Frank");break;
		case  9:strcpy(name, "Howard");break;
		case 10:strcpy(name, "Jeffery");break;
		case 11:strcpy(name, "James");break;				
		case 12:strcpy(name, "Keith");break;
		case 13:strcpy(name, "Robert");break;
		case 14:strcpy(name, "Samson");break;
		case 15:strcpy(name, "Shawn");break;
		case 16:strcpy(name, "Timothy");break;
		case 17:strcpy(name, "Terence");break;
		case 18:strcpy(name, "Marcus");break;
		case 19:strcpy(name, "Victor");break;
		case 20:strcpy(name, "Wayne");break;
		case 21:strcpy(name, "Dylan");break;
		case 22:strcpy(name, "Edwin");break;
		case 23:strcpy(name, "Franklin");break;
		case 24:strcpy(name, "Gabriel");break;
		case 25:strcpy(name, "Gavin");break;
		case 26:strcpy(name, "George");break;
		case 27:strcpy(name, "Hugo");break;
		case 28:strcpy(name, "Ivan");break;
		case 29:strcpy(name, "Isaac");break;
		case 30:strcpy(name, "Joshua");break;
	}
}

func_data()
{
	puts("=================================================================================");
	printf(" ����%s  ��Ȩ %d ��  ",name,year);
	printf("���� ");
	if(people<=13 && people>0)
		printf("__") ;
	else if(people<=25 && people>13)
		printf("�y");
	else if(people<=38 && people>25)
		printf("�z");
	else if(people<=50 && people>38)
		printf("�{");
	else if(people<=63 && people>50)
		printf("�|");
	else if(people<=75 && people>=63)
		printf("�}");
	else if(people<=83 && people>=75)
		printf("�~");
	else if(people>=83)
		printf("��");
	else 
		printf("  ");
	printf("  ���� ");
	if(military<=13 && military>0)
		printf("__") ;
	else if(military<=25 && military>13)
		printf("�y");
	else if(military<=38 && military>25)
		printf("�z");
	else if(military<=50 && military>38)
		printf("�{");
	else if(military<=63 && military>50)
		printf("�|");
	else if(military<=75 && military>=63)
		printf("�}");
	else if(military<=83 && military>=75)
		printf("�~");
	else if(military>=83)
		printf("��");
	else 
		printf("  ");
		
	printf("  �ڽ� ");
	if(religion<=13 && religion>0)
		printf("__") ;
	else if(religion<=25 && religion>13)
		printf("�y");
	else if(religion<=38 && religion>25)
		printf("�z");
	else if(religion<=50 && religion>38)
		printf("�{");
	else if(religion<=63 && religion>50)
		printf("�|");
	else if(religion<=75 && religion>=63)
		printf("�}");
	else if(religion<=83 && religion>=75)
		printf("�~");
	else if(religion>=83)
		printf("��");	
	else 
		printf("  ");
		
	printf("  �Ƹ� ");
	if(money<=13 && money>0)
		printf("__") ;
	else if(money<=25 && money>13)
		printf("�y");
	else if(money<=38 && money>25)
		printf("�z");
	else if(money<=50 && money>38)
		printf("�{");
	else if(money<=63 && money>50)
		printf("�|");
	else if(money<=75 && money>=63)
		printf("�}");
	else if(money<=83 && money>=75)
		printf("�~");
	else if(money>=83)
		printf("��");
	else 
		printf("  ");
	
	printf("   %d ��  ",q+year);
	puts(""); 
} 

func_choice()
{
	int i=0;
	char choice;
//	printf("%d %d %d %d",people,military,religion,money);
	printf("Your choice?[  ]\b\b\b");
	func_switch();
	Sleep(700);
}

func_switch()
{
	int direction=getch();
	switch(direction=getch())
	{
		case 75:
			i++;printf("��]\n");
			break;
		case 77:
			printf("��]\n");
			break;
		default:
			printf("??]\b\b\b");
			func_switch();
	}
}

func_welcome() 
{ 
	puts("=================================================================================");
	puts("��ӭ.");
	puts("�������Ϸ��,�㽫ʹ�ü����ϵ� '��' & '��' .");
	puts("ȥƽ��4����ͬ��ֵ:");
	puts("���� -- ���� -- �ڽ� -- �Ƹ�");
	puts("�㲻֪��ÿ���¼���������������ֵ�仯.");
	puts("�����ʱ������Ҫ�Լ������ж�.");
	puts("ף���� :)");
	puts("=================================================================================");
	system("timeout /t -1"); system("CLS");
} 

func_test()
{
	system("CLS");title();
	puts("=================================================================================");
	puts("����������һ��ѡ��:");
	puts("$ ����������һ�����������.(������������ʵ����Ӱ��)");
	puts("	���һ����.\n	���Ҳ�ϲ��(�˳���Ϸ).");
	func_choice();
	if(i==0)//right
	{
		puts("��. ");
	//	FILE *fp;
	//	fp=fopen("reignsuser.txt","a+");
	//	if(fp==NULL)
	//		printf("ERROR \"reignsuser.txt\" ! \n"),exit(404);
	//	fprintf(fp,"%s  ������λ. \n",name);
	//	fclose(fp);
		exit(0);system("timeout /t -1");
	} 
	else if(i==1)//left
	{
		puts("�ܺ�. ");i--;
	} 
	puts("=================================================================================");
}
//4 different value you need to balance(use %)
//people -- military -- religion -- money
//you don't know the actual value change for every event.
//most of the time you need to judge with your understanding.
//Some random would be add in the game (do you want or not)
event_01()
{
	
	puts("=================================================================================");
	puts("$ ������ ����Ӧ�ý����ϲ����������ǵ�ʵ���ս�����.");
	puts("	��(��ͷ��.\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people+=5;military-=20;religion+=10;money+=5;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people-=5;military+=20;religion-=5;money-=10;
	}
	year++;
	puts("=================================================================================");
}
event_02()
{
	
	puts("=================================================================================");
	puts("$ ���̣� �ҷ�����һ���������Ż��ң�������Ʒ�������������֤����.");
	puts("	��(��ͷ��.\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people+=5;military+=5;religion-=20;money+=10;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people+=10;military-=10;religion+=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_03()
{
	
	puts("=================================================================================");
	puts("$ ���������һ�ο�ս��������̸��ʱ�����ǵľ�������Խ���ǵ�ǰ��.");
	puts("	������.\n	������.");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people+=5;military+=10;religion-=5;money-=10;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people-=15;military-=5;religion+=10;money+=10;
	}
	year++;
	puts("=================================================================================");
}
event_04()
{
	
	puts("=================================================================================");
	puts("$ �����̣� ���ʿ��������ѹһЩ��ʦ��ʥ�ᣬ����ֹ����.");
	puts("	��(��ͷ��.\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people-=0;military-=20;religion+=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_05()
{

	puts("=================================================================================");
	puts("$ ������ ����û�����鷢�������Ӷ�Ҫ��������.");
	puts("	���ṩ��.\n	��ȥ������.");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people+=0;military+=10;religion+=0;money+=0;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people+=20;military-=10;religion-=0;money-=10;
	}
	year++;
	puts("=================================================================================");
}
event_06()
{
	
	puts("=================================================================================");
	puts("$ ���٣� �ոշ�����һ�����ģԽ����������Ҫ��֯�Ѳ�.");
	puts("	��(��ͷ��.\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=10;military-=10;religion-=10;money+=10;
	}	
	else if(i==1)
	{
	///	puts("Greet.");
		i--;
		people+=10;military+=10;religion+=20;money-=30;
	}
	year++;
	puts("=================================================================================");
}
event_07()
{
	
	puts("=================================================================================");
	puts("$ ���٣� ��Ӧ��ʵ���������׶��Ľֵ������ϲ�����ȫ.");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
	//	puts("I\'m afraid you have to");
		people-=20;military-=10;religion-=10;money+=10;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people+=10;military-=0;religion+=10;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_08()
{
	
	puts("=================================================================================");
	puts("$ ��ʦ�� .");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
	//	puts("I\'m afraid you have to");
		people+=10;military+=10;religion+=10;money+=10;
	}	
	else if(i==1)
	{
	//	puts("Greet.");
		i--;
		people+=10;military+=10;religion+=10;money+=10;
	}
	year++;
	puts("=================================================================================");
}
event_09()
{
	
	puts("=================================================================================");
	puts("$ ������ ���ǵı��ݷ��ع��ڱ�����Ӧ�����޽�һ���t����.");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=10;military-=10;religion+=0;money+=10;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people+=0;military+=20;religion+=0;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_10()
{
	
	puts("=================================================================================");
	puts("$ ���ǵĶ�������������˰�����������������޽���ˮ����.");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=20;military-=5;religion-=0;money+=10;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		
		people+=15;military+=5;religion+=0;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_11()//17�����������ң� 
{
	
	puts("=================================================================================");
	puts("$ ���Ǿ����ļ�ʮ�������ش󼢻�.");
	puts("	���ַ���ʳ.\n	��������Ϊ��.");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=100;military+=0;religion+=0;money+=0;
	}	
	else if(i==1)
	{
		//puts("Greet.");
		i--;
		people+=20;military-=0;religion-=0;money-=100;
	}
	year++;
	puts("=================================================================================");
}
event_12()
{

	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_13()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_14()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_15()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_16()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_17()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_18()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_19()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
event_20()
{
	
	puts("=================================================================================");
	puts("$ event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}

event_wolf()
{
	system("CLS");title();
	func_data();
	puts("=================================================================================");
	puts("$ ���ˣ� ����Ϊ�Ⲣ����ƽ.");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=10;military+=0;religion+=10;money-=20;
	}	
	else if(i==1)
	{
	//	puts("Greet.");
		i--;
		people-=20;military+=0;religion+=10;money-=10;
	}
	puts("=================================================================================");
}
event_sp1()
{
	system("CLS");title();
	func_data();
	puts("=================================================================================");
	puts("$ special event10.");
	puts("	��I will take it.\n	��I don\'t like it.");
	func_choice();
	if(i==0)
	{
		puts("I\'m afraid you have to");
		people+=20;military+=20;religion+=20;money+=20;
	}	
	else if(i==1)
	{
		puts("Greet.");
		i--;
		people-=20;military-=20;religion-=20;money-=20;
	}
	year++;
	puts("=================================================================================");
}
enent_sp2()
{
	system("CLS");title();
	func_data();
	puts("=================================================================================");
	puts("$ ��ʦ�� ĳЩɮ�³�����ҧ�˵���������˸�Ϊ֮����.");
	puts("	��(��ͷ).\n	��(ҡͷ).");
	func_choice();
	if(i==0)
	{
		//puts("I\'m afraid you have to");
		people-=10;military+=0;religion+=10;money-=20;
		puts("=================================================================================");
	}	
	else if(i==1)
	{
	//	puts("Greet.");
		i--;
		puts("=================================================================================");
		people+=0;military+=0;religion+=0;money+=0;
		event_wolf(); 
	}
	year++;
} 

event_666()
{
	system("CLS");system("color 4f");title();
	func_data();
	puts("=================================================================================");
	puts("$ ��ħ����.(���Թ���).");
	puts("	��(��ͷ)-.\n	��(ҡͷ)+.");
	func_choice();
	if(i==0) 
	{
		
		people+=0;military+=0;religion+=0;money+=0;
	}	
	else if(i==1)
	{
		
		i--;
		people+=0;military+=0;religion+=0;money+=0;
	}
	year++;
	puts("=================================================================================");
} 

//if year >10 
//enlarge rand 0-10 -> 0->15
//important 15: special event 
int main()
{	
	system("color f0"); 
	begin();
	func_welcome();
	
	while(1)
	{	
		func_cname();//�������� ���޽��� 
		func_test();//�����˳���Ϸ�Ĳ˵�ҳ�� 
		readfile();
		//����q��� 
		
		mevent_choi();//ѭ��һ������ 
		writefile();//д���ļ� ����¼ 
		
		year=0;
		people=50; 
		military=50;
		religion=50; 
		money=50;//�������� 
	}
	return 0;
}



void mevent_choi()
{	
	srand(time(NULL));//��һ������ 
	int a, b, c, d;
		a = rand()%11;
		b = rand()%11;
		c = rand()%11;
		d = rand()%11;
	
	int status=0;

	
	while(people>0 && military>0 && religion>0 && money>0 && people<300 && military<200 && religion<200 && money<300)//�������� 
	{	
		if( a!=d && b!=d && c!=d ) //ensure that 3 events linked together is different
		{	
			system("CLS");title();
			func_data();
			if(q+year==666)
			{
				event_666();
				system("CLS");title();
				func_data();
				system("color f0"); 
			}
			switch(d)
			{
				case  1:event_01();break;
				case  2:event_02();break;
				case  3:event_03();break;
				case  4:event_04();break;
				case  5:event_05();break;
				case  6:event_06();break;
				case  7:event_07();break;
				case  8:event_08();break;
				case  9:event_09();break;
				case 10:event_10();break;
				case 11:event_11();break;
				case 12:event_12();break;
				case 13:event_13();break;
				case 14:event_14();break;
				case 15:event_15();break;
				case 16:event_16();break;
				case 17:event_17();break;
				case 18:event_18();break;
				case 19:event_19();break;
				case 20:event_20();break;
				case 21:
					{
						status++;
						if(status>1)
							{break;}
						event_sp1();break;
					}
			}
			a=b;
			b=c;
			c=d;
			if(year<30)
				d=rand()%11;//��һ��֮����¼� 
			else
				d=rand()%21;// 30y������и����¼��� 
		}
		else
		{
			if(year<30)
				d=rand()%11;
			else
				d=rand()%21;
		}
	}
	system("CLS");death();
	printf("\n��Ȩ %d ��.\n",year);
	
	system("timeout /t -1");
	//if money>100 die :
	//if people>100 die:
	//if military>100 die:
	//if religion>100 die:
} 
