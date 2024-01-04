// RAM[arr + i]=-1 , where arr=100 and i ranges from 0 to 9.
// Basically, the value of RAM[100], RAM[101], RAM[102] .... RAM[108], RAM[109] is -1.

@100
D=A
@arr
M=D
@10
D=A
@n
M=D
@i
M=0
(loop)
@i
D=M
@n
D=D-M
@END
D;JEQ
@arr
D=M
@i
A=D+M
M=-1
@i
M=M+1
@loop
0;JMP
(END)
@END
0;JMP