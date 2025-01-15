#include<stdio.h>
int main (){
	char st[40];
	int i,j,l=0,flag=0;
	printf("Enter string ");
	scanf("%s",st);
	for (i=0;st[i]!='\0';i++){
		l=l+1;
	}
for(i=0,j=l-1;i<l/2;i++,j--){
	if (st[i]!=st[j]){
	
	flag=flag+1;
	break;
	}
}
if(flag==1){
	printf("Not palindrome");
}
else {
	printf("Palindrome");
}
return 0;
}
