#include<stdio.h>
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int min;
   if(a>b)min=b;
   else min=a;
   int yueshu;
   for(int i=min;i>=1;i--){
       if(a%i==0&&b%i==0){
         yueshu=i;
         break;
         }
   }
     printf("%d",yueshu);
return 0;
}