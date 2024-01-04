@R0
D=M
@n
M=D

@i
M=0


(LOOP)
@i
M=M+1
D=M
@99
A=A+D
M=-1
@n
M=M-1
D=M
@LOOP
D;JGT



(END)
@END
0;JMP