#include<stdio.h>
#include<string.h>

int main() {
  int salary,exp,n;
char peformance[2500];
float bonus;


printf("Enter the Empolyeer number you want");
scanf("%d",&n);
bonus =0;

for(int i = 1; i<=n; i++) {
printf("Enter the Salary of Empoleer");
scanf("%d",&salary);

printf("Enter the Experince of Empolyeer");
scanf("%d",&exp);

printf("Enter the Performance");
scanf("%s",&peformance);

if(exp>=10) {
if(strcmp(performance,"A") == 0 )
  bonus=0.25*salary;
else if(strcmp(performance,"B") == 0)
  bonus=0.15*salary;
else if(strcmp(performance,"C") ==0)
  bonus=0.10*salary;
}
else if(exp >= 5 && exp <= 9) {
if(strcmp(performance,"A")==0)
  bonus=0.12*salary;
else if(strcmp(performance,"B")==0)
  bonus=0.08*salary;
else if(strcmp(performance,"C")==0)
  bonus=0.05*salary;
}
else {
bonus =0;
}

if(bonus>10000) {
bonus = bonus +(bonus* 0.05);
}


printf("bonus: %.5f\n",bonus);
printf("Total Payment: %f\n",salary+bonus);
}
return 0;
}

  
