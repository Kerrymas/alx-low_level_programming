section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	extern printf

global main
main:
	sub rsp, 8	; align the stack

	mov rdi, format
	mov rsi, hello
	xor eax, eax ; clear EAX register
	call printf

	add rsp, 8	; restore the stack

	mov eax, 0x60	; exit system call
	xor edi, edi	; exit code 0
	syscall

