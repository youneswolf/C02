#include<stdio.h>
	char *ft_strupcase(char *str){
	    int i=0;
	    while(*(str+i)!='\0'){
	        if(*(str+i)>=97 && *(str+i)<=122){
	            str[i]=str[i]-32;
	        }
	        i++;
	    }
	    
	   return (str); 
	}
   	
   
int main(){
    char r[]="test";
    printf("%s",ft_strupcase(r));
    return 0;
}
