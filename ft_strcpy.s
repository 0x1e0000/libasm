global _ft_strcpy
section .text
_ft_strcpy:
	xor rcx, rcx

_loop:
	mov al, BYTE[rsi + rcx] ;al = src[i]
	mov BYTE[rdi + rcx], al	;dest[i] = al
	cmp al, 0
	je _end
	inc rcx
	jmp _loop

_end:
	mov rax, rdi
	ret
