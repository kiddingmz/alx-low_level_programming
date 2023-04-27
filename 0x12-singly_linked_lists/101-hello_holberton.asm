.data
        msg1 db 10,13,'Hello, Holberton: $'
.code
main:

	mov ax, 03
        int 10h

        lea dx, msg1
        mov ah, 9
        int 21h

	mov ah, 4ch
	int 21h
	int 20h
