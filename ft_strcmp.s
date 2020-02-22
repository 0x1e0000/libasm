global _ft_strcmp
section .text
_ft_strcmp:
	xor rcx, rcx
_loop:
	mov dl, [rsi + rcx]
	cmp dl, 0
	je _end

	mov dh, [rdi + rcx]
	cmp dh, 0
	je _end

	cmp dh, dl
	jne _end

	inc rcx
	jmp _loop

_end:
	mov al, [rdi + rcx]
	sub al, [rsi + rcx]
	movsx rax, al
	ret

