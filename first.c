
/*

#include<stdio.h>
int main(){
/*float var[5]={1.1f,2.2f,3.3f};
float(*ptr)[5];
ptr=&var;
printf("Value inside ptr : %u",ptr);
ptr=ptr+1;
printf("Value inside ptr : %u",ptr);
return 0;
};
float *ptr1=(float *)1000;
ptr1=ptr1+1;
printf("\nDifference location : %u",ptr1);
printf("\n Difference : %d", *ptr1);
return 0;
}

#include<stdio.h>

struct Student
{
int *ptr; //Stores address of integer Variable
char *name; //Stores address of Character String
}s1;

int main()
{

int roll = 20;
s1.ptr = &roll;
s1.name = "Pritesh";

printf("\nRoll Number of Student : %d",*s1.ptr);
printf("\nName of Student : %s",s1.name);

return(0);
}


//factorial//


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int fact(int n){
    int res1=1;
    if(n==0){
        return 1;
    }
    
    else{
     return(n*fact(n-1));
    }
}
void main(){
    int num,ans=0;
    printf("Enter the value of the number for which you want to find the factorial");
    scanf("%d",&num);
    ans=fact(num);
    printf("The answer is =%d",ans);
}



// cube//
#include<stdio.h>
#include<conio.h>
#include<math.h>

int cube(int n){
    
    return c;
}
void main(){
    int n,ans=0;
    printf("Enter the value of the number for which you are going to find  the cube :\n");
    scanf("%d",&n);
    ans=cube(n);
    printf("The cube of the  number is =%d ",ans);
}


//Ascending order sort of an array//
#include<stdio.h>
#include<conio.h>

void main(){
      int n,i=0,j=0;
      int temp=0;
      int arr[n];
      printf("Enter the number of elements in the array");
      scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      printf("Elements of original array: \n");    
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);     
    }   
      for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      }
      printf("Elements of the changed array:");
      for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
      }
      
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n;
    int sum=0;
    int temp=0;
    int rem=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(sum==temp){
        printf("The number %d is an armstrong number",temp);
    }
    else{
        printf("The number %d is not an armstrong number",temp);
    }
}



//printing all  the letters from a to z in the for loop
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int i=0,j=0;
    char c;
    printf("The alphabets in Capital letter Order:\n");
    for(i=65;i<=90;i++){
        c=(char)i;
        printf("%c\n",c);
    }
    printf("The alphabets in Normal letter form Order:\n");
    for(i=97;i<=122;i++){
        c=(char)i;
        printf("%c\n",c);
    }
    
}



//reverse string//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void reverse(char *x, int start, int end){
    char c;
    if (start >= end)
       return;
    c = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = c;

    reverse(x, ++start, --end);
    
}
int main(){
    char str[100];
    printf("Enter the string");
    scanf("%s",&str);
    reverse(str,0,strlen(str)-1);
    printf("The reversed string is %s ",str);
    return 0;
}


//palindrome//


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main(){
    int n;
    int temp=0;
    int rem=0;
    int num=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    if(num==temp){
        printf("The number %d is a palindrome",temp);
    }
    else{
        printf("The number %d is not a palindrome",temp);
    }
}



//gcd//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main(){
    int n1,n2,i=0,j=0;
    int gcd=0;
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i){
          if((n1%i==0)&&(n2%i==0)){
               gcd=i;
          }
    }
    printf("The gcd of %d and %d is %d",n1,n2,gcd);
}


//lcm//
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void main(){
    int n1,n2,max=0;
    int lcm=0;
    bool x=true;
    scanf("%d %d",&n1,&n2);
    max=(n1>n2) ? n1:n2;
    while(x==true){
        if((max%n1==0) &&(max%n2==0)){
            lcm=max;
            printf("The lcm of input numbers %d and %d is %d",n1,n2,lcm);
            break;
        }
    }
}
*/