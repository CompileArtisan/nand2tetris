// psuedocode:
// R0 = n
// RAM[SUM]=0
// RAM[i]=1
// LOOP:
//      SUM+=i
//      i++
//      n--
// Go back to LOOP if n>0
// R1 = SUM

@R0
D=M
@n
M=D

@SUM
M=0

@i
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

@R1
M=D

(END)
@END
0;JMP



