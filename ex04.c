#include<stdio.h>
	int	ft_str_is_lowercase(char *str){
   	    int i=0;
   	   if(*(str+i)=='\0'){
   	       return 0;
   	   }
   	       while(*(str + i)!='\0'){
   	           if(*(str+i) >= 97 && *(str + i) <= 122){
   	               i++;
   	           }else{
   	               return 0;
   	           }
   	           
   	       }
   	       
   	   return 1;
   	
   }
int main(){
   char r[]="ahbdsc";
   printf("%d",ft_str_is_lowercase(r));
    return 0;
}
