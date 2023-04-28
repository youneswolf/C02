#include<stdio.h>
int strlent(char *src){
int len=0;    

 while(src[len]!='\0'){
	       len++;
	    }
	    return len;
}
	    
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	 int l;
	 int i=0;
	 l=strlent(src);
	 while(i<=size-1){
	    *(dest+i)=*(src+i);
	    i++;
	 }
	 *(dest+i)='\0';
	 return l;
	}

int main(){
char b[]="test";
char r[]="hello";
printf("%d %s",ft_strlcpy(b,r,7),b);
}
