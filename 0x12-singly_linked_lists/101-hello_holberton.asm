Global   Main
	  Extern    printf
Main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
		Ret
format: db `Hello, Holberton\n`,0


