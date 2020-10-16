global _ft_strcmp
section .text

_ft_strcmp:
	mov rcx, -1
	mov rax, 0

increm:
	inc rcx

loop:
	cmp BYTE[rdi + rcx], 0
	je result

	cmp BYTE[rsi + rcx], 0
	je result

	mov dl, BYTE[rdi + rcx]
	cmp dl, BYTE[rsi + rcx]

	je increm

result:
	movzx rdx, BYTE[rdi + rcx]
	movzx rax, BYTE[rsi + rcx]
	sub rax, rdx
	neg rax

return:
	ret
