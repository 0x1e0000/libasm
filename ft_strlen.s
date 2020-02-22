global _ft_strlen
section .text
_ft_strlen:
	mov	rax, -1
	jmp _loop
_loop:
	inc rax
	mov cl, [rdi + rax]
	cmp	cl, 0
	jne _loop
	ret
