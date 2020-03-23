section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strcpy
	extern _ft_strlen
_ft_strdup:
	push rdi
	call _ft_strlen
	pop rdi
	mov r13, rax
	inc r13
	push rdi
	mov rdi, r13
	call _malloc
	pop rdi
	cmp rax, 0
	je _end

	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret
_end:
	ret
