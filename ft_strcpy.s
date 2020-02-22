global _ft_strcpy
section .text
_ft_strcpy:
	xor rcx, rcx

_loop:
	mov al, [rsi + rcx]
	cmp al, 0
	je _end
	mov [rdi + rcx], al
	inc rcx
	jmp _loop

_end:
	mov rax, rdi
	ret
