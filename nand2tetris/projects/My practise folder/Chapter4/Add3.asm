// RAM[3]= RAM[0]+RAM[1]+RAM[2]
@0
D=M
@1
D=M+D
@2
D=M+D
@3
M=D
(END)
@END
0;JMP