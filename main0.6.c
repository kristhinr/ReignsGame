#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void func_choice();//主选择函数 
void func_switch();//choice内函数 
void func_welcome();
void func_test();//可用于退出程序， 
void title();
void death();
void begin();
void func_cname(); //国王名字（随机 
void writefile();  //写入文件，用于记录国王 

void func_data(); //每个页面提供数据

// 需要函数提供 选择的影响 
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

int getNextLinePos(FILE *p)//向下移动一行 《尚未使用 
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
	puts(" ████████");
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
	puts(" ████████");
	puts(" ████████");
	puts(" ██        ██"); 
	puts(" ██        ██");
	puts(" ██        ██");
	puts(" ████████");
	puts(" ████████");
	puts(" ████");
	puts(" ██  ██");
	puts(" ██    ██");
	puts(" ██      ██");
	puts(" ██      ██    ████████");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ████████");
	puts(" ████████");
	puts(" ██        ██"); 
	puts(" ██        ██");
	puts(" ██        ██");
	puts(" ████████");
	puts(" ████████");
	puts(" ████");
	puts(" ██  ██");
	puts(" ██    ██");
	puts(" ██      ██");
	puts(" ██      ██");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ");
	puts(" ████████  ████████  ");
	puts(" ██        ██  ██              "); 
	puts(" ██        ██  ██              ");
	puts(" ██        ██  ██              ");
	puts(" ████████  ███████    ");
	puts(" ████████  ███████    ");
	puts(" ████          ██              ");
	puts(" ██  ██        ██              ");
	puts(" ██    ██      ██              ");
	puts(" ██      ██    ████████  ");
	puts(" ██      ██    ████████  ████████");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ");
	puts(" ████████  ████████  ");
	puts(" ██        ██  ██              "); 
	puts(" ██        ██  ██              ");
	puts(" ██        ██  ██              ");
	puts(" ████████  ███████    ");
	puts(" ████████  ███████    ");
	puts(" ████          ██              ");
	puts(" ██  ██        ██              ");
	puts(" ██    ██      ██              ");
	puts(" ██      ██    ████████  ");
	puts(" ██      ██    ████████  ");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████ ");
	puts(" ████████  ████████  ████████ ");
	puts(" ██        ██  ██                    ██     "); 
	puts(" ██        ██  ██                    ██     ");
	puts(" ██        ██  ██                    ██     ");
	puts(" ████████  ███████          ██     ");
	puts(" ████████  ███████          ██     ");
	puts(" ████          ██                    ██     ");
	puts(" ██  ██        ██                    ██     ");
	puts(" ██    ██      ██                    ██      ");
	puts(" ██      ██    ████████  ████████ ");
	puts(" ██      ██    ████████  ████████  ████████");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████ ");
	puts(" ████████  ████████  ████████ ");
	puts(" ██        ██  ██                    ██     "); 
	puts(" ██        ██  ██                    ██     ");
	puts(" ██        ██  ██                    ██     ");
	puts(" ████████  ███████          ██     ");
	puts(" ████████  ███████          ██     ");
	puts(" ████          ██                    ██     ");
	puts(" ██  ██        ██                    ██     ");
	puts(" ██    ██      ██                    ██      ");
	puts(" ██      ██    ████████  ████████ ");
	puts(" ██      ██    ████████  ████████ ");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████  ████████");
	puts(" ████████  ████████  ████████  ████████");
	puts(" ██        ██  ██                    ██        ██"); 
	puts(" ██        ██  ██                    ██        ██");
	puts(" ██        ██  ██                    ██        ██");
	puts(" ████████  ███████          ██        ██    ████");
	puts(" ████████  ███████          ██        ██    ████");
	puts(" ████          ██                    ██        ██        ██");
	puts(" ██  ██        ██                    ██        ██        ██");
	puts(" ██    ██      ██                    ██        ██        ██");
	puts(" ██      ██    ████████  ████████  ████████");
	puts(" ██      ██    ████████  ████████  ████████  ████████");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████  ████████");
	puts(" ████████  ████████  ████████  ████████");
	puts(" ██        ██  ██                    ██        ██"); 
	puts(" ██        ██  ██                    ██        ██");
	puts(" ██        ██  ██                    ██        ██");
	puts(" ████████  ███████          ██        ██    ████");
	puts(" ████████  ███████          ██        ██    ████");
	puts(" ████          ██                    ██        ██        ██");
	puts(" ██  ██        ██                    ██        ██        ██");
	puts(" ██    ██      ██                    ██        ██        ██");
	puts(" ██      ██    ████████  ████████  ████████");
	puts(" ██      ██    ████████  ████████  ████████");
	Sleep(a);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ");
	puts(" ██        ██  ██                    ██        ██              ███      ██  "); 
	puts(" ██        ██  ██                    ██        ██              ███      ██  ");
	puts(" ██        ██  ██                    ██        ██              ████    ██  ");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██  ");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██  ");
	puts(" ████          ██                    ██        ██        ██  ██    ████  ");
	puts(" ██  ██        ██                    ██        ██        ██  ██    ████  ");
	puts(" ██    ██      ██                    ██        ██        ██  ██      ███  ");
	puts(" ██      ██    ████████  ████████  ████████  ██      ███  ");
	puts(" ██      ██    ████████  ████████  ████████  ██        ██  ████████");
	Sleep(b);
	system("CLS");
	puts("");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ");
	puts(" ██        ██  ██                    ██        ██              ███      ██  "); 
	puts(" ██        ██  ██                    ██        ██              ███      ██  ");
	puts(" ██        ██  ██                    ██        ██              ████    ██  ");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██  ");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██  ");
	puts(" ████          ██                    ██        ██        ██  ██    ████  ");
	puts(" ██  ██        ██                    ██        ██        ██  ██    ████  ");
	puts(" ██    ██      ██                    ██        ██        ██  ██      ███  ");
	puts(" ██      ██    ████████  ████████  ████████  ██      ███  ");
	puts(" ██      ██    ████████  ████████  ████████  ██        ██  ");
	Sleep(a);
	system("CLS");
	title();
	Sleep(1000);
}
title()
{
	puts("");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ████████");
	puts(" ████████  ████████  ████████  ████████  ██        ██  ████████");
	puts(" ██        ██  ██                    ██        ██              ███      ██  ██"); 
	puts(" ██        ██  ██                    ██        ██              ███      ██  ███");
	puts(" ██        ██  ██                    ██        ██              ████    ██    ███");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██      ███");
	puts(" ████████  ███████          ██        ██    ████  ██  ██  ██        ███ ");
	puts(" ████          ██                    ██        ██        ██  ██    ████        ████    ");
	puts(" ██  ██        ██                    ██        ██        ██  ██    ████          ████  ");
	puts(" ██    ██      ██                    ██        ██        ██  ██      ███  ██      ███");
	puts(" ██      ██    ████████  ████████  ████████  ██      ███  ████████");
	puts(" ██      ██    ████████  ████████  ████████  ██        ██  ████████");
}
death()
{
	puts("");
	puts(" ██        ██  ████████  ██        ██     ███████    ████████  ████████ ");
	puts(" ██        ██  ████████  ██        ██     ████████  ████████  ████████ ");
	puts(" ██        ██  ██        ██  ██        ██     ██        ██        ██        ██             "); 
	puts(" ██        ██  ██        ██  ██        ██     ██        ██        ██        ██             ");
	puts("   ██    ██    ██        ██  ██        ██     ██        ██        ██        ██             ");
	puts("   ██████    ██        ██  ██        ██     ██        ██        ██        ████████ ");
	puts("     ████      ██        ██  ██        ██     ██        ██        ██        ████████ ");
	puts("     ████      ██        ██  ██        ██     ██        ██        ██        ██             ");
	puts("       ██        ██        ██  ██        ██     ██        ██        ██        ██             ");
	puts("       ██        ██        ██  ██        ██     ██        ██        ██        ██             ");
	puts("       ██        ████████  ████████     ████████  ████████  ████████ ");
	puts("       ██        ████████  ████████     ███████    ████████  ████████ ");
	puts("=================================================================================");
	if(money<=0)
		printf("新的寡头政府流放了你.");
	if(military<=0 && people >=20)
		printf("你的兵力过于薄弱，最后你战死在你的王座前.");
	if(military<=0 && people <20) 
		printf("你的兵力过于薄弱，你被刺杀在宫殿中.");
	if(people<=0)
		printf("你的人民饥寒交迫，起身反抗.");
	if(religion<=0)
		printf("你的人民不再信仰你，教会组建了新的王国.");
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
	printf(" 国王%s  掌权 %d 年  ",name,year);
	printf("人民 ");
	if(people<=13 && people>0)
		printf("__") ;
	else if(people<=25 && people>13)
		printf("▂");
	else if(people<=38 && people>25)
		printf("▃");
	else if(people<=50 && people>38)
		printf("▄");
	else if(people<=63 && people>50)
		printf("▅");
	else if(people<=75 && people>=63)
		printf("▆");
	else if(people<=83 && people>=75)
		printf("▇");
	else if(people>=83)
		printf("█");
	else 
		printf("  ");
	printf("  军队 ");
	if(military<=13 && military>0)
		printf("__") ;
	else if(military<=25 && military>13)
		printf("▂");
	else if(military<=38 && military>25)
		printf("▃");
	else if(military<=50 && military>38)
		printf("▄");
	else if(military<=63 && military>50)
		printf("▅");
	else if(military<=75 && military>=63)
		printf("▆");
	else if(military<=83 && military>=75)
		printf("▇");
	else if(military>=83)
		printf("█");
	else 
		printf("  ");
		
	printf("  宗教 ");
	if(religion<=13 && religion>0)
		printf("__") ;
	else if(religion<=25 && religion>13)
		printf("▂");
	else if(religion<=38 && religion>25)
		printf("▃");
	else if(religion<=50 && religion>38)
		printf("▄");
	else if(religion<=63 && religion>50)
		printf("▅");
	else if(religion<=75 && religion>=63)
		printf("▆");
	else if(religion<=83 && religion>=75)
		printf("▇");
	else if(religion>=83)
		printf("█");	
	else 
		printf("  ");
		
	printf("  财富 ");
	if(money<=13 && money>0)
		printf("__") ;
	else if(money<=25 && money>13)
		printf("▂");
	else if(money<=38 && money>25)
		printf("▃");
	else if(money<=50 && money>38)
		printf("▄");
	else if(money<=63 && money>50)
		printf("▅");
	else if(money<=75 && money>=63)
		printf("▆");
	else if(money<=83 && money>=75)
		printf("▇");
	else if(money>=83)
		printf("█");
	else 
		printf("  ");
	
	printf("   %d 年  ",q+year);
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
			i++;printf("←]\n");
			break;
		case 77:
			printf("→]\n");
			break;
		default:
			printf("??]\b\b\b");
			func_switch();
	}
}

func_welcome() 
{ 
	puts("=================================================================================");
	puts("欢迎.");
	puts("在这个游戏中,你将使用键盘上的 '←' & '→' .");
	puts("去平衡4个不同的值:");
	puts("人民 -- 军队 -- 宗教 -- 财富");
	puts("你不知道每个事件具体所带来的数值变化.");
	puts("大多数时间你需要自己做出判断.");
	puts("祝好运 :)");
	puts("=================================================================================");
	system("timeout /t -1"); system("CLS");
} 

func_test()
{
	system("CLS");title();
	puts("=================================================================================");
	puts("现在做出第一个选择:");
	puts("$ 现在你会扮演一个被诅咒的王.(并不会对你的现实产生影响)");
	puts("	←我会接受.\n	→我不喜欢(退出游戏).");
	func_choice();
	if(i==0)//right
	{
		puts("晚安. ");
	//	FILE *fp;
	//	fp=fopen("reignsuser.txt","a+");
	//	if(fp==NULL)
	//		printf("ERROR \"reignsuser.txt\" ! \n"),exit(404);
	//	fprintf(fp,"%s  放弃王位. \n",name);
	//	fclose(fp);
		exit(0);system("timeout /t -1");
	} 
	else if(i==1)//left
	{
		puts("很好. ");i--;
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
	puts("$ 将军： 我们应该进攻南部王国，他们的实力日渐增长.");
	puts("	←(点头）.\n	→(摇头).");
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
	puts("$ 主教： 我发现了一名年轻的天才画家，他的作品是神存在于世的证明啊.");
	puts("	←(点头）.\n	→(摇头).");
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
	puts("$ 东部领地又一次开战，当我们谈话时，他们的军队正穿越我们的前线.");
	puts("	←进攻.\n	→撤退.");
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
	puts("$ 大主教： 你的士兵正在欺压一些牧师和圣会，快阻止他们.");
	puts("	←(点头）.\n	→(摇头).");
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
	puts("$ 将军： 今年没有事情发生，军队都要无聊死了.");
	puts("	←提供酒.\n	→去运用它.");
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
	puts("$ 法官： 刚刚发生了一场大规模越狱，我们需要组织搜查.");
	puts("	←(点头）.\n	→(摇头).");
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
	puts("$ 法官： 你应该实行宵禁，首都的街道在网上并不安全.");
	puts("	←(点头).\n	→(摇头).");
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
	puts("$ 牧师： .");
	puts("	←(点头).\n	→(摇头).");
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
	puts("$ 将军： 我们的堡垒防守过于薄弱，应该再修建一座瞭望塔.");
	puts("	←(点头).\n	→(摇头).");
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
	puts("$ 我们的都城闻起来像放了半年的垃圾，我们来修建下水道吧.");
	puts("	←(点头).\n	→(摇头).");
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
event_11()//17张牌你能秒我？ 
{
	
	puts("=================================================================================");
	puts("$ 我们经历的几十年来的重大饥荒.");
	puts("	←分发粮食.\n	→我无能为力.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("$ 狼人： 我认为这并不公平.");
	puts("	←(点头).\n	→(摇头).");
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
	puts("	←I will take it.\n	→I don\'t like it.");
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
	puts("$ 牧师： 某些僧侣出现了咬人的情况，狼人该为之负责.");
	puts("	←(点头).\n	→(摇头).");
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
	puts("$ 恶魔降临.(测试功能).");
	puts("	←(点头)-.\n	→(摇头)+.");
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
		func_cname();//生成名称 （无界面 
		func_test();//可以退出游戏的菜单页面 
		readfile();
		//读入q年份 
		
		mevent_choi();//循环一个生命 
		writefile();//写入文件 （记录 
		
		year=0;
		people=50; 
		military=50;
		religion=50; 
		money=50;//重置数据 
	}
	return 0;
}



void mevent_choi()
{	
	srand(time(NULL));//第一次数据 
	int a, b, c, d;
		a = rand()%11;
		b = rand()%11;
		c = rand()%11;
		d = rand()%11;
	
	int status=0;

	
	while(people>0 && military>0 && religion>0 && money>0 && people<300 && military<200 && religion<200 && money<300)//死亡限制 
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
				d=rand()%11;//第一次之后的事件 
			else
				d=rand()%21;// 30y后可以有更多事件， 
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
	printf("\n掌权 %d 年.\n",year);
	
	system("timeout /t -1");
	//if money>100 die :
	//if people>100 die:
	//if military>100 die:
	//if religion>100 die:
} 
