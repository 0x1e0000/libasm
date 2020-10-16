global _ft_write
section .text
	extern ___error
_ft_write:
	mov rax, 0x02000004
	syscall
	jc	_error
	ret

_error:
	push r15
	mov r15, rax
	call ___error
	mov [rax], r15
	mov rax, -1
	pop r15
	ret
