#include<stdio.h>
	int	ft_str_is_uppercase(char *str){
   	    int i=0;
   	   if(*(str+i)=='\0'){
   	       return 0;
   	   }
   	       while(*(str + i)!='\0'){
   	           if(*(str+i) >= 65 && *(str + i) <= 90){
   	               i++;
   	           }else{
   	               return 0;
   	           }
   	           
   	       }
   	       
   	   return 1;
   	
   }
int main(){
   char r[]="ANJS";
   printf("%d",ft_str_is_uppercase(r));
    return 0;
}
