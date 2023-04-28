#include<stdio.h>
   	char *ft_strncpy(char *dest, char *src, unsigned int n){
       int i=0;
       while(*(src+i)='\0' && i < n){
           *(dest+i) = *(src+i);
           i++;
       }
       while(i<n){
       dest[i]='\0';
       i++;
       }
       return (dest);
   }
int main(){
   char src[]="test";
   char dest[]="hfr";
   printf("result=%s",ft_strncpy(dest,src,6));
    return 0;
}
