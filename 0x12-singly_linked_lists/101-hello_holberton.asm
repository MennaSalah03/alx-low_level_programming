section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0

section .text
	global main
	extern printf

main:
	push rsi
	push hello

	call printf

	add rsp, 16
	ret
