//لغه c
#include <stdio.h>
//مكتبه cs50
#include <cs50.h>
//الاوامر(funkction)
//تطبيق11
//عمل امر يطبع نص ويكرره
void hello(int n ){
for(int i = 0 ; i <= n ; i++)
printf("'wellcom..abdo'%d\n",i);
}
int main(void){
hello(10);
}

//تطبيق 1
//string answer = get_string("whow old aer you\n");
//printf("old are you=%s \n",answer);
//.................................................................
//تطبيق 2
//string m=("hello.tito\n");
//printf("good %s \n",m);
//.................................................................
//تطبيق 3
/*
int num1 =5;
int num2 =4;
printf("%d \n", num1+num2);
printf("%d \n", num1-num2);
printf("%d \n", num1*num2);
printf("%d \n", num1/num2);
printf("%d \n",++num1%num2);
*/
//..................................................................
//تطبيق 4
//string wellcom = get_string ("what your name?\n" );
//printf("wellcom %s\n",wellco);
//..................................................................
//تطبيق 5
//عمل عماليات حسابيه كلها بطريقه المقارنات قعده  if
/*int x= get_int("ples enter x: ");
int y= get_int("ples enter y: ");
if(x<y)
{
printf("the num1<num2\n");
}
else
{
printf("the num1>num2\n");
}
*/
//.................................................................
//تطبيق 6
//كل العمليات الحسابيه من رقمين
/*int num1= get_int("enter num1:\n" );
string maction= get_string("enter opret.+.-.*./\n");
int num2= get_int("enter num2:\n" );
printf("%i\n",num1+num2);
printf("%i\n",num1-num2);
printf("%i\n",num1*num2);
printf("%i\n",num1/num2);
printf("%i\n",num1%num2);
*/
//.................................................................
//تطبيق 7
//الاؤقام الزوجيه والفرديه
//sudocod
/*
*عمل برنامج لمعرفه الرقم زوجي ولا فردي
1_طلب من المستخدم اخال رقم
2_لو المستخدم دخل رقم فردي اطبع ان الرقم فردي
ولو المستخدم دخل رقم زوجي اطبع الرقم زوجي
*/
/*int n= get_int("enter the number:\n");
if(n%2==0)
{
printf(":the number is even:%d\n: " ,n);
}
else{
    printf("the number is odd:%d\n: " ,n);
}
*/
//.................................................................
//تطبيق 8
//عمل تطبيق ب نعم او لا (agree.Y&N)
/*char c = get_char("do you agree?:enter'y'.N' \n");
if(c=='y'||c=='Y')
{
    printf("ok agree:enter:\n");
}
else if(c=='n'||c=='N')
{
    printf("Not agerr:out:\n");
}
*/
//.................................................................
//تطبيق 9
//التكرار او الحالقات(loops)
/*int i= 0;
while(i<11)
{
    printf("{....{:['w.e.l.l.c.o.m']:}....}%d\n",i);
    i++;
}
*/
//.................................................................
//(for loops)
//نفس فكره (while loops)بس تختلف في طريقه الكتابه
//تطبيق 10
/*for(int i = 0 ; i < 11 ; i++)
{
    printf("{..{:['a.b.d.a.l.u.t.i.f']:}..}%d\n",i);
}
printf("................................\n");
for(int n = 0 ; n < 22 ; n=n+2)
{
    printf("{..{:['a.b.d.o']:}..}%d\n",n);
}
*/
//.................................................................
