#include<stdlib.h>
#include<stdio.h>

unsigned long find_start(void){
	__asm__("mov %rsp, %rax");
}

int main(){
	printf("0x%x\n", find_start());
}
