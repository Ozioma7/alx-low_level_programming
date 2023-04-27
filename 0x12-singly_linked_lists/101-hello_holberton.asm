section .text
	extern printf
	global main

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0	;system call (sys_write)
	call printf	;to call kernel

	mov eax, 0	;system call (sys_exit)
	ret

section .data
msg	db "Hello, Holberton",0xa ; also 10
ftm:	db "%s", 10, 0
