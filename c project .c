#include<stdio.h>
#include<string.h>
#include <windows.h>

int main()
{
    while(1)
    {
        system("cls");
        gotoxy(75,4);
        printf(" WELCOME TO STUDENT DATABASE SYSTEM ");
        gotoxy(65,10);
        printf("choose  option");
        gotoxy(45,12);
        printf("1.Teacher");
        gotoxy(45,14);
        printf("2.Stduent ");
        gotoxy(45,16);
        printf("3.Registration ");
        gotoxy(45,18);
        printf("4. EXIT");
        gotoxy(45,22);
        int c;
        scanf("%d",&c);
        if(c==1)
        {
            system("cls");
            tteacher();
        }
        else if (c==2)
        {
            system("cls");
            student();
        }
        else if(c==3)
        {
            system("cls");
            {
                registration();
            }
        }
        else if(c==4)
        {
            system("cls");
            exit(0);
        }
        else
        {
            system("cls");
            printf("!!!!!!!!!!!!!! please insert the right option !!!!!!!!!!!!!!!!!!!");
        }

    }

}
int registration()
{
    system("cls");
    int a,c=0;
    char teacherid[15],tid[15],username[15],user[15],pass[15],password[15],name[20],department[15];
    FILE *p;
    gotoxy(75,4);
    printf("Registration");
    gotoxy(45,6);
    printf(" Please declare yourself frist ");
    gotoxy(35,8);
    printf("1. TEACHER ");
    gotoxy(35,10);
    printf("2. STUDENT  ");
    gotoxy(35,12);
    printf("3. Exit");
    gotoxy(35,14);
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        gotoxy(75,2);
        printf("Teacher");
        gotoxy(75,5);
        printf("Enter the TEACHER ID ");
        gotoxy(65,8);
        scanf("%s",tid);
        gotoxy(75,10);
        p=fopen("Teacher id.txt","a");
        fclose(p);
        p=fopen("Teacher id.txt","r");
        while(fscanf(p,"%s",teacherid)!=EOF)
        {
            if(strcmp(tid,teacherid)==0)
            {
                system("cls");
                gotoxy(65,15);
                printf("Already registered");
                c=1;
                getch();
            }
        }
        if(c==0)
        {
            system("cls");
            p=fopen("teacher information.txt","a");
            gotoxy(75,10);
            printf("Enter you name ");
            gotoxy(65,15);
            scanf("%s",name);
            gotoxy(65,20);
            printf("Which department you have joined ");
            gotoxy(65,25);
            scanf("%s",department);
            fprintf(p,"\n%s %s %s\n",name,tid,department);
            fclose(p);
            p=fopen("Teacher id.txt","a");
            fprintf(p,"%s\n",tid);
            fclose(p);

        }
    }
    else if(a==2)
    {

        system("cls");
        gotoxy(75,5);
        printf("Enter the UserName ");
        gotoxy(65,8);
        scanf("%s",username);
        gotoxy(75,10);
        printf("Enter the password");
        gotoxy(65,12);
        scanf("%s",password);
        p=fopen("student password.txt","r");
        while(fscanf(p,"%s %s",user,pass)!=EOF)
        {
            if(strcmp(user,username)==0 && strcmp(pass,password)==0)
            {
                system("cls");
                gotoxy(65,15);
                printf("Already registered");
                c++;
                getch();

            }
        }
        fclose(p);
        if(c==0)
        {
            p=fopen("student password.txt","a");
            fprintf(p,"\n%s %s\n",username,password);
            fclose(p);
            information();
            getch();
            main();
        }
    }
    else if(a==3)
    {
        system("cls");
        exit(0);
        main();
    }
    else
    {
        system("cls");
        gotoxy(75,20);
        printf("wrong!!!!!!!!!!!!!!!!!!");
    }
}
int information()
{
    system("cls");
    char roll[20],fname[35],mname[35],name[35],addres[100],phone[13];
    FILE *p;
    p=fopen("student information database.txt","a");
    gotoxy(75,5);
    printf("Student information Database");
    gotoxy(65,7);
    printf("(Dont use comma or space, use Dot'.')");
    gotoxy(25,9);
    printf("Enter your Roll no : ");
    gotoxy(85,9);
    scanf("%s",roll);
    gotoxy(25,11);
    printf("Enter the name of the student ");
    gotoxy(85,11);
    getchar();
    gets(name);
//scanf("%s",name);
    gotoxy(25,13);
    printf("Enter the student name of Father ");
    gotoxy(85,13);
    getchar();
    gets(fname);
  //  scanf("%s",fname);
    gotoxy(25,15);
    printf("Enter the student name of Mother ");
    gotoxy(85,15);
    getchar();
    gets(mname);
  //  scanf("%s",mname);
    gotoxy(25,17);
    printf("Enter the preasant address ");
    gotoxy(85,17);
    getchar();
    gets(addres);
    //scanf("%s",addres);
    gotoxy(25,19);
    printf("Enter the Parents phone number ");
    gotoxy(85,19);
    scanf("%s",phone);
    gotoxy(55,24);
    printf("Successfully insert the student information");
    fprintf(p,"%s %s %s %s %s %s\n",roll,name,fname,mname,addres,phone);
    fclose(p);

}
void tteacher()
{

    int a,c=0;
    char teacherid[15],teacher[15];
    gotoxy(75,4);
    printf("Teacher");
    gotoxy(45,15);
    printf("Enter the teacher id ");
    gotoxy(35,17);
    scanf("%s",teacherid);
    FILE *p;
    p=fopen("Teacher id.txt","r");
    while(fscanf(p,"%s",teacher)!=EOF)
    {
        if(strcmp(teacher,teacherid)==0)
        {
            gotoxy(55,20);
            printf("please enter");
            c=1;
            break;
        }
    }
    getch();

      if (c==0)
        {
            system("cls");
            gotoxy(75,15);
            printf("Please register ");
            getch();

        }
    if(c==1)
    {
        system("cls");
        gotoxy(75,4);
        printf("Teacher");
        gotoxy(45,6);
        printf("  what do you want to do right now");
        gotoxy(35,8);
        printf("1. Update reasult ");
        gotoxy(35,10);
        printf("2. Student informtion ");
        gotoxy(35,12);
        printf("3. Exit");
        gotoxy(35,14);
        scanf("%d",&a);

        if(a==1)
        {
            system("cls");
            reasult();
        }
        else if (a==2)
        {
            system("cls");
            cinformation();
        }
        else if(a==3)
        {
            system("cls");
            exit(0);
            main();
        }
        else
        {
            system("cls");
            printf("!!!!!!!!!!!!!! please insert the right option !!!!!!!!!!!!!!!!!!!");
        }
    }

}
int reasult()
{
    int b='y';
    while(b=='y')
    {
        char roll[15],semister[20],subject[20],grade[5];
        float q1,q2,q3,avarage,attendence,assignment,preasantation,midterm,finalterm,total;
        gotoxy(75,2);
        printf("Student result update");
        gotoxy(55,4);
        printf("Enter the 'Student roll' no:");
        gotoxy(45,6);
        scanf("%s",roll);
        gotoxy(45,7);
        printf("Enter the subject (Dont type subject name more than 5 characters)");
        gotoxy(45,9);
        scanf("%s",subject);
        gotoxy(45,11);
        printf("Enter the 'Student semister' Note:(1st 2017) ");
        gotoxy(45,13);
        scanf("%s",semister);
        gotoxy(55,14);
        printf("Enter the Marks of student ");
        gotoxy(25,15);
        printf("''Attendence'' marks of the student ");
        gotoxy(85,15);
        scanf("%f",&attendence);
        gotoxy(25,17);
        printf("  ''Assignment'' marks of the student ");
        gotoxy(85,17);
        scanf("%f",&assignment);
        gotoxy(25,19);
        printf("  ''QUIZ-1'' marks of the student ");
        gotoxy(85,19);
        scanf("%f",&q1);
        gotoxy(25,21);
        printf("  ''QUIZ-2'' marks of the student ");
        gotoxy(85,21);
        scanf("%f",&q2);
        gotoxy(25,23);
        printf("  ''QUIZ-3'' marks of the student ");
        gotoxy(85,23);
        scanf("%f",&q3);
        avarage=(q1+q2+q3)/3;
        gotoxy(25,25);
        printf("  '' PRESENTATION '' marks of the student ");
        gotoxy(85,25);
        scanf("%f",&preasantation);
        gotoxy(25,27);
        printf("  ''MID TERM'' marks of the student ");
        gotoxy(85,27);
        scanf("%f",&midterm);
        gotoxy(25,29);
        printf("  ''FINAL TERM'' marks of the student ");
        gotoxy(85,29);
        scanf("%f",&finalterm);
        gotoxy(55,31);
        printf("You successfully update the the mark in the database ");
        total=(attendence+assignment+avarage+preasantation+midterm+finalterm);
        if(total>=80 && total<=100)
        {
            grade[0]='A';
            grade[1]='+';
        }
        else if(total>=75 && total<=79)
        {
            grade[0]='A';
            grade[1]=' ';
        }
        else if(total>=70 && total<=74)
        {
            grade[0]='A';
            grade[1]='-';
        }
        else if(total>=65 && total<=69)
        {
            grade[0]='B';
            grade[1]='+';
        }
        else if(total>=60 && total<=64)
        {
            grade[0]='B';
            grade[1]='A';
        }
        else if(total>=55 && total<=59)
        {
            grade[0]='B';
            grade[1]='-';
        }
        else if(total>=50 && total<=54)
        {
            grade[0]='C';
            grade[1]='+';
        }
        else if(total>=45 && total<=49)
        {
            grade[0]='C';
            grade[1]=' ';
        }
        else if(total>=40 && total<=44)
        {
            grade[0]='D';
            grade[0]=' ';
        }
        else if(total>=0 && total<=39)
        {
            grade[0]='F';
            grade[1]=' ';
        }
        else
        {
            printf("irregular");
        }
        grade[2]='/0';
        gotoxy(55,33);
        printf(" GRADE  '%s'  ",grade);

        FILE *p;
        p=fopen("student marksheet.txt","a");
        fprintf(p,"%s %s %s %.2f %.2f %.2f %.2f %.2f %.2f %.2f %c%c\n",roll,semister,subject,attendence,assignment,avarage,preasantation,midterm,finalterm,total,grade[0],grade[1],grade[2]);
        gotoxy(55,35);
        fclose(p);


        system("cls");
        {
            gotoxy(45,16);
            printf("Do you want to update another subject mark(Y/n)");
            gotoxy(45,20);
            b=getch();
            system("cls");
            // getch();
        }
    }
}
void cinformation()
{
    int c=0;
    char roll[20],rollno[20],fname[35],mname[35],name[35],addres[100],phone[13];
    gotoxy(55,5);
    printf("Enter the Roll no of the student ");
    gotoxy(45,7);
    scanf("%s",roll);
    FILE *p;
    p =fopen("student information database.txt","r");
    while(fscanf(p,"%s %s %s %s %s %s",rollno,name,fname,mname,addres,phone)!=EOF)
    {
        if(strcmp(roll,rollno)==0)
        {
            gotoxy(75,10);
            c++;
           // getch();
        }
       }
         if(c==0)
        {
            system("cls");
            gotoxy(75,20);
            printf("Not Found");
            getch();
        }
    if(c==1)
    {
        system("cls");
        gotoxy(75,5);
        printf("Student information Database");
        gotoxy(65,7);
        printf("(Dont use comma or space, use Dot'.')");
        gotoxy(25,9);
        printf(" Roll no :    %s",roll);
        gotoxy(25,11);
        printf("  Name of the student          %s",name);
        gotoxy(25,13);
        printf("  Student name of Father       %s",fname);
        gotoxy(25,15);
        printf("  Student name of Mother       %s",mname);
        gotoxy(25,17);
        printf("  Preasant address             %s",addres);
        gotoxy(25,19);
        printf("  Parents phone number         %s",phone);
    }
    fclose(p);
    gotoxy(0,32);
    getch();

}
int student()
{
    int c=0;
    char username[15],password[15],pass[15],user[15];
    gotoxy(75,5);
    printf("Student");
    gotoxy(45,10);
    printf("username");
    gotoxy(45,12);
    scanf("%s",username);
    gotoxy(45,14);
    printf("Enter the password");
    gotoxy(45,16);
    scanf("%s",password);
    FILE *p;
    p=fopen("student password.txt","r");
    while(fscanf(p,"%s %s",user,pass)!=EOF)
    {
        if(strcmp(username,user)==0 && strcmp(password,pass)==0)
        {
            gotoxy(55,20);
            printf("You have successfully entered the student valley");
            c++;
            getch();
        }
    }
    if(c==1)
    {
        system("cls");
        searchreasult();
        getch();
        main();
    }

}
int searchreasult()//main()
{
    int l=12;
    char roll[15],rollno[15],semister[20],subject[20],grade[5];
    float q1,q2,q3,avarage,attendence,assignment,preasantation,midterm,finalterm,total;
    gotoxy(75,5);
    printf("Student reasult database");
    gotoxy(65,7);
    printf("Enter your Roll no :");
    gotoxy(55,9);
    scanf("%s",roll);
    gotoxy(0,11);
    printf("RoLL no");
    gotoxy(13,11);
    printf("Semister");
    gotoxy(24,11);
    printf("Subject");
    gotoxy(40,11);
    printf("Attendence");
    gotoxy(55,11);
    printf("Assignment");
    gotoxy(70,11);
    printf("QUIZ ");
    gotoxy(85,11);
    printf("PRESENTATION");
    gotoxy(100,11);
    printf("MID TERM");
    gotoxy(115,11);
    printf("FINAL TERM\n");
    gotoxy(130,11);
    printf("Total");
    gotoxy(145,11);
    printf("Grade");
    gotoxy(0,12);

    FILE *p;
    p=fopen("student marksheet.txt","r");
    while(fscanf(p,"%s %s %s %f %f %f %f %f %f %f %c%c",rollno,semister,subject,&attendence,&assignment,&avarage,&preasantation,&midterm,&finalterm,&total,&grade[0],&grade[1])!=EOF)
    {
        if(strcmp(roll,rollno)==0)
        {
            gotoxy(0,l);
            printf("%s",rollno);
            gotoxy(13,l);
            printf("%s",semister);
              gotoxy(24,l);
            printf("%s",subject);
            gotoxy(40,l);
            printf("%.2f",attendence);
            gotoxy(55,l);
            printf("%.2f",assignment);
             gotoxy(70,l);
            printf("%.2f",avarage);
             gotoxy(85,l);
            printf("%.2f",preasantation);
            gotoxy(100,l);
            printf("%.2f",midterm);
             gotoxy(115,l);
            printf("%.2f",finalterm);
            gotoxy(130,l);
            printf("%.2f",total);
            gotoxy(145,l);
            printf("%c",grade[0]);
            gotoxy(146,l);
            printf("%c",grade[1]);
            l++;
        }
    }
    fclose(p);
    getch();
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

