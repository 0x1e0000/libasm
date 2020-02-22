global _ft_read
section .text
_ft_read:
	mov rax, 0x02000003
	syscall
	jc _error
	ret

_error:
	mov rax, -1
	ret
