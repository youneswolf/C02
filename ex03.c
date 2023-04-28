#include<stdio.h>
   	int	ft_str_is_numeric(char *str){
   	    int i=0;
   	   if(*(str+i)=='\0'){
   	       return 0;
   	   }
   	       while(*(str + i)!='\0'){
   	           if(*(str+i) >= 48 && *(str + i) <= 57){
   	               i++;
   	           }else{
   	               return 0;
   	           }
   	           
   	       }
   	       
   	   return 1;
   	
   }
int main(){
   char r[]="0124t5";
   printf("%d",ft_str_is_numeric(r));
    return 0;
}
