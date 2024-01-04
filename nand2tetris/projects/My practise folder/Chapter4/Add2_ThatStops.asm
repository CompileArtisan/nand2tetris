// adds RAM[0] and RAM[1] and stores in RAM[2], and stops program execution soon after

@R0
D=M      // D now has the value of RAMA[0]
@R1
D=D+M    // D = RAM[0] + RAM[1]
@R0
M=D      // RAM[2]=D
@6
M=0;JMP  // RAM[6]=0 and then just jump to address number 6. By this it'll stay in address number 6.

         // we did this so that only the required number of registers are executed.