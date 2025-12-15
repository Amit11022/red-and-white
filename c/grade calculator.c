#include<stdio.h>
int main(){
	int score;
	char grade;
	printf("enter the score between 0-100:");
	scanf("%d",&score);
	grade=(score>=90)?'A':
	      (score>=80)?'B':
	      (score>=70)?'C':
	      (score>=60)?'D':
	      (score>=50)?'E':'F';
	      printf(" Your Grade Is: %c ,",grade);
	switch(grade){
	     case'A':
	     printf("Excellent Work!");
	     break;
	     case'B':
	     printf("Well Done");
	     break;
	     case'C':
	     printf("Good Job");
	     break;
	     case'D':
	     printf("You passed,but you could do better");
	     break;
	     case'E':
	     printf("Sorry,you failed");
	     break;
	 }
	 if(grade !='F'){
	 	printf("Congratulation you are eligible for Next level");
	 }
	  else{
	 	printf("TRy again Later");
	}
}
