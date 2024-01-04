@R0
D=M
@n
M=D

@i
M=0

@SUM
M=0

(LOOP)
@i
M=M+1
D=M
@SUM
M=M+D
@n
M=M-1
D=M
@LOOP
D;JGT

@SUM
D=M
@R2
M=D

(END)
@END
0;JMP

