#include<stdio.h>
   	int	ft_str_is_alpha(char *str){
   	    int i=0;
   	   if(*(str+i)=='\0'){
   	       return 1;
   	   }
   	       while(*(str + i)!='\0'){
   	           if(*(str+i) >= 'A' && *(str + i) <= 'Z' || *(str+i) >= 'a' && *(str + i) <= 'z'){
   	               i++;
   	           }else{
   	               return 0;
   	           }
   	           
   	       }
   	       
   	   return 1;
   	
   }
int main(){
   char r[]="";
   printf("%d",ft_str_is_alpha(r));
    return 0;
}
