global	_ft_read
section	.text
	extern ___error
_ft_read:
	mov rax, 0x02000003		; 'name' of read
							; on macos, need to add 0x2000000 to the unix syscall
	syscall					; to call read
	jc _error				; if meeting an error, the error value is put into rax,
							; and we jump to error function (jump carry)
	ret

_error:
	push r15
	mov r15, rax			; using temp register to store the error value
	call ___error			; to put the address location of errno into rax value
	mov [rax], r15			; to put the error value (stored in r15) at this address location
	mov rax, -1				; rax may return -1
	pop r15
	ret
