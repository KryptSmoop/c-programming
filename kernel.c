#include<stdio.h>
#include<stdlib.h>

char * command_str;

int kernel_enabled = 1;

void command_parser(char * x){
	
	if(x == "help"){
		printf("%s", "-help: previews this screen...");
	}
}

void commands(){
	printf("%s", "<C:/>");
	scanf("%s", command_str);
	command_parser(command_str);
	
}

int main(){
	while(kernel_enabled == 1)
	{
		
		commands();
				
	}
	
	return 0;
}