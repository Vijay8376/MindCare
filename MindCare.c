#include<stdio.h>
#include<conio.h>
#include<time.h>

void addentry();
void replaceentry();
void viewentry();
void deleteentry();
void appendentry();
void depressiontest();
void anxietytest();
void stresstest();
void ptsdtest();
void bipolartest();
void psychosistest();
void eatingtest();
void ocdtest();
void adhdtest();
void parentaltest();
void help();
void crisis();
void artone();
void arttwo();
void artthree();
void artfour();
void artfive();
void artsix();
void artseven();
void arteight();
void artnine();
void artten();
void feedback();


struct day {
char dat[20];
};

//Main menu
void main()
{
int n,n1,numChars;
struct day d;
char sentence[20],date[10];
struct tm* localTime;
time_t currentTime;
clrscr();

//To store time
time(&currentTime);
localTime = localtime(&currentTime);
sprintf(d.dat,"%02d-%02d-%04d", localTime->tm_mday, localTime->tm_mon + 1,localTime->tm_year+1900);

//Actual Mainmenu
MAINMENU:
printf("\t\t\t\tMindCARE\n\nSelect an option\n\n1. Daily Journal\n2. Self Assessment\n3. Articles\n4. Mindfulness Breathing exercise\n5. Seek Professional Help\n6. Crisis Support\n7. Submit Feedback and Suggestions\n8. EXIT\n\nEnter your option : ");
scanf("%d",&n);
switch(n)
{
	case 1:
SUBONE:
		printf("\n\nPlease select an option\n\n1. Record Today's entry\n2. Replace an entry\n3. View an entry\n4. Delete an entry\n5. Append an entry\n6. Go back\n\nEnter your option : ");
		scanf("%d",&n1);
		switch(n1)
		{
			case 1:
				addentry();
			case 2:
				replaceentry();
			case 3:
				viewentry();
			case 4:
				deleteentry();
			case 5:
				appendentry();
			case 6:
				main();
			default:
				printf("Enter valid entry!!");
				goto SUBONE;
		}
	case 2:
SUBTWO:
		clrscr();
		printf("\n\t\t\tSelf Assessment Tests");
		printf("\n\nPlease select an option\n\n1. Depression Screening test\n2. Anxiety Screening test\n3. Stress Assessment\n4. Post-Traumatic Stress Disorder (PTSD) Screening\n5. Bipolar Disorder Self-Test:\n6. Psychosis Self Assessment\n7. Eating Disorder test\n8. Obsessive-Compulsive Disorder (OCD) Screening\n9. Attention-Deficit/Hyperactivity disorder test\n10. Parental Stress and burn out assessment\n11. Go back\n\nEnter your option : ");
		scanf("%d",&n1);
		switch(n1)
		{
			case 1:
				depressiontest();
			case 2:
				anxietytest();
			case 3:
				stresstest();
			case 4:
				ptsdtest();
			case 5:
				bipolartest();
			case 6:
				psychosistest();
			case 7:
				eatingtest();
			case 8:
				ocdtest();
			case 9:
				adhdtest();
			case 10:
				parentaltest();
			case 11:
				main();
			default:
				printf("Enter valid entry!!");
				goto SUBTWO;
		}
	case 3:
	SUBTHREE:
		clrscr();
		printf("\n\t\t\tArticles related to Mental Health");
		printf("\n\nPlease select an option\n\n1. The Importance of Mental Health Awareness\n2. Breaking the Stigma: Mental Health Education and Awareness\n3. Mental Health in the Workplace: Promoting Awareness and Well-being\n4. Mental Health Awareness Month: Advocating for Change\n5. The Role of Social Media in Mental Health Awareness\n6. Youth Mental Health: Fostering Awareness and Support\n7. Celebrity Advocacy for Mental Health Awareness \n8. Mental Health and the Impact of the COVID-19 Pandemic\n9. Intersectionality and Mental Health Awareness: Addressing Unique Challenges\n10. Mental Health of Queer Individuals\n11. Go back\n\nEnter your option : ");
		scanf("%d",&n1);
		switch(n1)
		{
			case 1:
				artone();
			case 2:
				arttwo();
			case 3:
				artthree();
			case 4:
				artfour();
			case 5:
				artfive();
			case 6:
				artsix();
			case 7:
				artseven();
			case 8:
				arteight();
			case 9:
				artnine();
			case 10:
				artten();
			case 11:
				main();
			default:
				printf("Enter valid entry!!");
				goto SUBTHREE;
		}
	case 4:
		printf("Use Visual Studio code for this option");
		getch();
		main();
	case 5:
		help();
	case 6:
		crisis();
	case 7:
		feedback();
	case 8:
		printf("\n\nThanks for using MindCARE app!\n\nPress any key	 to EXIT");
		getch();
		exit(0);
	default:
		printf("\n\nEnter a valid entry and try again!!");
		main();
}
}

//To delete entry
void deleteentry()
{
char ex[] = ".txt\\";
char date[20];
char pr[100] = "C:\\MINDCARE\\APPDATA\\JOURNAL\\";
FILE *file;
clrscr();
printf("\n\n");
printf("\t\t\tPersonal Mood Tracking Journal");
printf("\n\nEnter the date of the journal you wish to delete (DD-MM-YYYY) : ");
scanf("%s",date);
strcat(pr,date);
strcat(pr,ex);

file=fopen(pr,"w");
fclose(file);

printf("\n\nJournal recorded on %s is deleted sucessfully",date);

getch();
main();
}

//To replace an entry
void replaceentry()
{
int i;
char s[1000];
char ex[] = ".txt\\";
char date[20];
char pr[100] = "C:\\MINDCARE\\APPDATA\\JOURNAL\\";
FILE *file;
clrscr();
printf("\n\n");
printf("\t\t\tPersonal Mood Tracking Journal");
printf("\n\nEnter the date of the journal you wish to replace (DD-MM-YYYY) : ");
scanf("%s",date);
strcat(pr,date);
strcat(pr,ex);

file=fopen(pr,"w");
printf("\n\n");
printf("Enter the new data you wish to save\n\n\t");
for(i=0;i<2;i++)
{
fgets(s,sizeof(s),stdin);
fprintf(file,"%s",s);
}
fclose(file);

printf("\n\nJournal recorded on %s is replaced sucessfully",date);
getch();
main();
}

//To view an entry
void viewentry()
{
char ex[] = ".txt\\";
char date[20];
char line[1000];
char pr[100] = "C:\\MINDCARE\\APPDATA\\JOURNAL\\";
FILE *file;
clrscr();
printf("\n\n");
printf("\t\t\tPersonal Mood Tracking Journal");
printf("\n\nEnter the date of the journal you wish to view (DD-MM-YYYY) : ");
scanf("%s",date);
strcat(pr,date);
strcat(pr,ex);
//printf("%s",pr);
file=fopen(pr,"r");
if(file=='\0')
{
printf("No entry found on the specified day!");
}

while (fgets(line, sizeof(line), file) !=NULL)
{
printf("%s",line);
}

fclose(file);

getch();
main();

}

//To add an entry
void addentry()
{
int i;
char s[1000];
char ex[] = ".txt\\";
char pr[200] = "C:\\MINDCARE\\APPDATA\\JOURNAL\\";
struct day d;
FILE *file;

int numChars;
char sentence[20],date[10];
struct tm* localTime;
time_t currentTime;
time(&currentTime);
localTime = localtime(&currentTime);
sprintf(date,"%02d-%02d-%04d", localTime->tm_mday, localTime->tm_mon + 1,localTime->tm_year+1900);


strcat(pr,date);
strcat(pr,ex);
clrscr();
printf("\n\n");
printf("\t\t\tPersonal Mood Tracking Journal");
printf("\n\nEnter about your day\n\n\t");
file=fopen(pr,"w");
for(i=0;i<2;i++)
{
fgets(s,sizeof(s),stdin);
fprintf(file,"%s",s);
}
fclose(file);
printf("\nYour data has been stored");
getch();
main();
}

//To append an entry
void appendentry()
{
int i;
char s[1000];
char ex[] = ".txt\\";
char date[20];
char pr[100] = "C:\\MINDCARE\\APPDATA\\JOURNAL\\";
FILE *file;
clrscr();
printf("\t\t\tPersonal Mood Tracking Journal");
printf("\n\nEnter the date of the journal you wish to append to (DD-MM-YYYY) : ");
scanf("%s",date);
strcat(pr,date);
strcat(pr,ex);

file=fopen(pr,"a");
printf("\n\n");
printf("Enter the new data you wish to append\n\n\t");
for(i=0;i<2;i++)
{
fgets(s,sizeof(s),stdin);
fprintf(file,"%s",s);
}
fclose(file);

printf("\n\nJournal recorded on %s is appended sucessfully",date);
getch();
main();
}

void depressiontest()

{
int n,i=0;
clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 1:\nHow often have you experienced a lack of interest or plesure in acitivities you used to enjoy?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 2:\nDo you often feel tired or lack of energy?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 3:\nHave you had significant changes in your appetite or weight recently?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 4:\nDo you find it difficult to concentrate or make decisions?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 5:\nHave you had thoughts of self harm or suicide?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 6:\nHow would you rate your sleep quality?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 7:\nDo you often feel guilty or worthless?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 8:\nHave you experienced a loss of interest in sex (if applicable)?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 9:\nHow often do you feel sad or hopeless?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

clrscr();
printf("\n\t\t\Depression self test");
printf("\n\nQuestion 10:\nHave these symptoms and feelings affected your daily life and relationships?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

clrscr();
printf("\n\t\t\tDepression self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of depression");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of depression");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of depression");
}
else if(i<=30)
{
printf("You are at severe risk of depression");
}
getch();
main();
}

void anxietytest()

{
int n,i=0;
clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 1:\nHow often do you feel excessively worried or anxious about various aspects of your life?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 2:\nDo you often experience restlessness or have trouble sitting still due to anxious thoughts");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 3:\nHave you had, sudden, intense feelings of panic or terror, accompanied by physical symptoms like rapid heartbeat or sweating?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 4:\nDo you avoid situations or activities because they make you anxious?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 5:\nHow often do you experence muscle tension or phusical sumptoms of anxiety(eg: trembling, sweating)?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 6:\nHave you had difficulty sleeping due to anxious thoughts or restlessness?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 7:\nDo you often feel irritable or on edge?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 8:\nHow often do you experience excessive worry or fear about specific situations or objects (flying, heights, spiders etc.,)?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 9:\nHow these anxious feelings and symptoms interfered with your daily life and relationships?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

clrscr();
printf("\n\t\t\Anxiety self test");
printf("\n\nQuestion 10:\nHave you had thoughts of self harm or suicide related to your anxiety (if applicable) ?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

clrscr();
printf("\n\t\t\tAnxiety self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of anxiety");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of anxiety");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of anxiety");
}
else if(i<=30)
{
printf("You are at severe risk of anxiety");
}


getch();
main();
}

void help()
{
	int i,j;
    char table[6][3][20] = {
	{"S.No."       , "Name"  , "Number"},
	{"Therapist 1", "Name 1", "+91 8374628475"},
	{"Therapist 2", "Name 2", "+91 9238475637"},
	{"Therapist 3", "Name 3", "+65 83928475"},
	{"Therapist 4", "Name 4", "+65 83744292"},
	{"Therapist 5", "Name 5", "+1 289 3839475"}
    };
clrscr();
    printf("\n\t\t\tProfessional Help");
    printf("\n\n\tSeeking professional therapy is always a wise choice becasuse it provides a safe and confidential space to address personal challenges and improve mental well-being. Therapists, with their expertise, can offer valuable insights, coping strategies and support to navigate life's difficulties. It's a proactive step towards self-improvement and emotional resilience, helping individuals lead healthier, more fulfilling lives.");
    printf("\n\n");

    for (i = 0; i < 6; i++) {
	for (j = 0; j < 3; j++) {
	    printf("%-20s", table[i][j]);
	}
	printf("\n");
    }
    printf("\n\nPress ENTER to go back to mainmenu");
    getch();
	main();
}

void crisis()
{
	int i,j;
    char table[6][3][20] = {
	{"Organization"       , "HQ"  , "Number"},
	{"VANDREVALA", "Hyderabad", "1860-2662-345"},
	{"Roshni", "Telangana", "040-66202000"},
	{"VIMHANS", "Delhi", "011-66206620"},
	{"Roshan", "Snehi", "86980-86980"},
	{"Snehi", "Mumbai", "022-2772-6770"}
    };
clrscr();
    printf("\n\t\t\tCrisis Support");
    printf("\n\n\tMental health crisis helplines play a crucial role in providing immediate assistance to individuals facing emotional distress or crisis situations. These helplines offer a compassionate, non-judgmental ear, often 24/7, to listen, offer guidance, and connect callers with professional help when needed. They are lifelines for those in crisis, ensuring that help and support are just a phone call away, promoting mental health and well-being.");
	printf("\n\n");

    for (i = 0; i < 6; i++) {
	for (j = 0; j < 3; j++) {
	    printf("%-20s", table[i][j]);
	}
	printf("\n");
    }
    printf("\n\nPress ENTER to go back to mainmenu");
    getch();
	main();
}

void artone()
{
	FILE*file;
	char line[1000];
	//char pr[100]="\"C:\\MINDCARE\\APPDATA\\Articles\\1.TXT";
	//char nxt[20]="1.TXT\\\"";
	clrscr();
	printf("\nThe Importance of Mental Health Awareness\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\1.TXT\\","r");
	//file=fopen(pr,"r");
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void arttwo()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nBreaking the Stigma: Mental Health Education and Awareness\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\2.txt\\","r");

	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artthree()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nMental Health in the Workplace: Promoting Awareness and Well-being\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\3.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artfour()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nMental Health Awareness Month: Advocating for Change\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\4.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artfive()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nThe Role of Social Media in Mental Health Awareness\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\5.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artsix()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nYouth Mental Health: Fostering Awareness and Support\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\6.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
	}

void artseven()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nCelebrity Advocacy for Mental Health Awareness\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\7.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void arteight()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nMental Health and the impact of COVID-19 Pandemic\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\8.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artnine()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nIntersectionality and Mental Health Awareness: Addressing Unique Challenges\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\9.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void artten()
{
	FILE*file;
	char line[1000];
	clrscr();
	printf("\nMental Health of Queer Individuals\n\n");
	file=fopen("C:\\MINDCARE\\APPDATA\\Articles\\10.txt\\","r");
	//if(file==NULL)
	while (fgets(line, sizeof(line), file) !=NULL)
	{
		printf("%s",line);
	}

	fclose(file);

	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}

void feedback()
{
	char s[1000];
	int i;
	FILE*file;
	clrscr();
	printf("\n\n");
	printf("\t\t\tFeedback");
	printf("\n\nPlease enter your feedback and suggestions\n\n\t");
	file=fopen("C:\\MINDCARE\\APPDATA\\JOURNAL\\feedback.txt\\","a	");
	for(i=0;i<2;i++)
	{
		fgets(s,sizeof(s),stdin);
		fprintf(file,"%s",s);
	}
	fclose(file);
	printf("\nYour data has been stored, Thanks for your feedback!");
	getch();
	printf("Press ENTER to go back to Main menu");
	main();
}


void stresstest()
{
int n,i=0;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 1:\nHow often do you experience physical symptoms like headache, muscle tension, or stomach aches due to stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 2:\nHow well do you sleep at night when stressed?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 3:\nDo you find it difficult to concentrate or make decisions when under stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 4:\nHow often do you engage in relaxation techniques (eg., deep breathing, meditation) to manage stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 5:\nDo you often feel overwhelmed by your responsibilities and obligations?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 6:\nHow often do you engage in physical activity to relieve stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 7:\nDo you have a strong support system of friends and family to talk to when stressed?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 8:\nHow often do you take time off work or other responsibilities to recharge when feeling stresed");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 9:\nDo you experience mood swings or irritability when stressed?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tStress Self Test");
printf("\n\nQuestion 10:\nHow often do you find yourself thinking about work or stress-related issues when you should be relaxing or enjoying leisure time?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tStress Self Test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of stress");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of stress");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of stress");
}
else if(i<=30)
{
printf("You are at severe risk of stress");
}


getch();
main();
}


void ptsdtest()
{
int n,i=0;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 1:\nHave you ever experienced a traumatic event that continues to haunt your thoughts or dreams?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 2:\nDo you often avoid situations, places, or people that remind you of the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 3:\nHow often do you experience intrusive thoughts or flashbacks related to the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 4:\nDo you have trouble remembering important details about the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 5:\nHave you noticed an increase in irritability or angry outbursts since the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 6:\nHow has your sleep been affected since the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 7:\nDo you feel emotionally numb or detached from others since the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 8:\nHave you experienced an exaggerated startle response since the traumatic event (e.g., easily startled by loud noises)?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 9:\nHow often do you feel guilty or blame yourself for what happened during the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tPTSD Self Test");
printf("\n\nQuestion 10:\nHave you noticed a decrease in interest or participation in activities you once enjoyed since the traumatic event?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tPTSD Self Test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of PTSD");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of PTSD");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of PTSD");
}
else if(i<=30)
{
printf("You are at severe risk of PTSD");
}


getch();
main();
}


void bipolartest()
{
int n,i=0;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 1:\nHave you experienced periods of unusually elevated or irritable mood that lasted for at least a week?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 2:\nDuring elevated mood episodes, do you engage in impulsive or reckless behaviors such as excessive spending, risky sexual behavior, or substance abuse?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 3:\nHave you experienced episodes of depression characterized by low energy, sadness, and a loss of interest or pleasure in activities that lasted for at least two weeks?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 4:\nDo you have periods of rapid mood swings between extreme highs and lows?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 5:\nHave you ever experienced racing thoughts, increased talkativeness, or a decreased need for sleep during elevated mood episodes?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 6:\nDo you find it difficult to concentrate or make decisions during mood episodes?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 7:\nHow often do you engage in activities that could lead to harmful consequences during elevated mood episodes?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 8:\nDo you have a family history of bipolar disorder or similar mood disorders?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 9:\nHave you experienced changes in your appetite or weight during mood episodes?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tBipolarity Self Test");
printf("\n\nQuestion 10:\nHow often do you experience feelings of hopelessness or suicidal thoughts during depressive episodes?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tBipolarity Self Test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of Bipolarity");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of Bipolarity");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of Bipolarity");
}
else if(i<=30)
{
printf("You are at severe risk of Bipolarity");
}


getch();
main();
}

void psychosistest()
{
int n,i=0;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 1:\nHave you experienced thoughts or beliefs that others find unusual or strange?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 2:\nDo you ever hear voices or sounds that others cannot hear?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 3:\nHave you ever had the sensation that someone is watching you or plotting against you?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 4:\nDo you often feel extremely paranoid or suspicious of others' intentions?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 5:\nHave you experienced a significant decline in your ability to perform daily activities or work due to unusual thoughts or perceptions?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 6:\nDo you have difficulty organizing your thoughts or following a conversation?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 7:\nHave you ever felt detached from reality or as if you are in a dream-like state?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 8:\nDo you experience extreme mood swings, including periods of intense excitement followed by deep depression?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 9:\nHave you ever felt that your thoughts are controlled by external forces or that you are being influenced by others' thoughts?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tPsychosis self test");
printf("\n\nQuestion 10:\nDo you have a family history of psychotic disorders or mental illnesses?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tPsychosis self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of Psychosis");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of Psychosis");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of Psychosis");
}
else if(i<=30)
{
printf("You are at severe risk of Psychosis");
}


getch();
main();
}

void eatingtest()
{
int n,i=0;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 1:\nHave you ever engaged in frequent episodes of excessive eating in a short period, accompanied by a feeling of lack of control over eating?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 2:\nDo you often engage in behaviors to compensate for overeating, such as self-induced vomiting, excessive exercise, or fasting?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 3:\nHave you ever felt an intense fear of gaining weight, even if you were not overweight?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 4:\nDo you find yourself constantly preoccupied with thoughts about food, calories, dieting, or body weight and shape?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 5:\nHave you experienced a significant change in your weight or eating habits within a short period?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 6:\nDo you avoid eating in front of others or make excuses to avoid meals with friends or family?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 7:\nHave you ever used laxatives, diet pills, or diuretics to control your weight or shape?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 8:\nDo you frequently experience fatigue, dizziness, or physical symptoms due to restrictive eating or purging behaviors?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 9:\nHave you noticed changes in your hair, skin, or nails as a result of your eating habits?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tEating Disorder  self test");
printf("\n\nQuestion 10:\nDo you have a distorted body image, where you perceive yourself as overweight even if you are underweight or within a healthy weight range?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tEating Disorder  self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of Eating Disorder ");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of Eating Disorder ");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of Eating Disorder ");
}
else if(i<=30)
{
printf("You are at severe risk of Eating Disorder ");
}


getch();
main();
}


void ocdtest()
{
exit(0);
}

void adhdtest()
{
int n,i=0;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 1:\nHow often do you find it challenging to pay attention to details or make careless mistakes in school or work?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 2:\nDo you often struggle to sustain attention during tasks, such as reading, listening to lectures, or working on projects?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 3:\nHave you experienced difficulty organizing tasks and activities, such as managing your time and belongings?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 4:\nDo you often avoid or procrastinate on tasks that require sustained mental effort?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 5:\nDo you frequently lose important items like keys, phone, or paperwork necessary for tasks and activities?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 6:\nHave you often been forgetful in daily activities, such as forgetting appointments or obligations?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 7:\nDo you find it difficult to sit still for extended periods when it's required (e.g., at school, work, meetings)?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 8:\nDo you often fidget with your hands or feet, or squirm in your seat when you're expected to be still?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 9:\nDo you frequently interrupt or intrude on others' conversations, games, or activities without waiting for your turn?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tOCD self test self test");
printf("\n\nQuestion 10:\nHave you experienced symptoms of impulsivity, such as difficulty waiting your turn, blurting out answers, or acting without thinking inappropriately?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tOCD self test self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of OCD self test");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of OCD self test");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of OCD self test");
}
else if(i<=30)
{
printf("You are at severe risk of OCD self test");
}


getch();
main();
}


void parentaltest()
{
int n,i=0;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 1:\nDo you often feel overwhelmed by the demands of parenting?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHONE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHONE;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 2:\nDo you have difficulty finding time for self-care and relaxation as a parent?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTWO:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTWO;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 3:\nAre you often irritable or short-tempered with your children or partner due to stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTHREE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTHREE;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 4:\nDo you often worry excessively about your children's well-being or future?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFOUR:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFOUR;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 5:\nHave you experienced sleep disturbances due to parental stress or caregiving responsibilities?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHFIVE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHFIVE;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 6:\nDo you feel guilty or inadequate as a parent, even when you're doing your best?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSIX:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSIX;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 7:\nAre you often anxious about meeting your children's educational, emotional, or social needs?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHSEVEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHSEVEN;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 8:\nDo you struggle to balance work and family life, leading to stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHEIGHT:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHEIGHT;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 9:\nHave you noticed physical symptoms like headaches, muscle tension, or digestive issues related to parental stress?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHNINE:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHNINE;
}

//;
printf("\n\t\tParental Stress self test");
printf("\n\nQuestion 10:\nDo you often feel isolated or lack a support system of friends or family who understand the challenges of parenting?");
printf("\n\n1. Rarely or none of the time\n2. Some of the time\n3. Most of the time\n4. All the time");
printf("\n\nEnter your option : ");
scanf("%d",&n);
SWITCHTEN:
switch(n)
{
case 1:
break;
case 2:
i++;
break;
case 3:
i=i+2;
break;
case 4:
i=i+3;
break;
default:
printf("\nEnter a valid option!");
goto SWITCHTEN;
}

//;
printf("\n\t\t\tParental Stress self test\n\n");
printf("Your score is %d which implies... ",i);
if(i<=5)
{
printf("You are at low risk of Parental Stress");
}
else if(i<=15)
{
printf("You are at mild to moderate risk of Parental Stress");
}
else if(i<=25)
{
printf("You are at moderate to severe risk of Parental Stress");
}
else if(i<=30)
{
printf("You are at severe risk of Parental Stress");
}



getch();
main();
}


