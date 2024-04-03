// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/08/ProgramFlow/BasicLoop/BasicLoopVME.tst

load Math.vm,
load Main.vm;

set sp 256,
set local 300,
set argument 400,

repeat 26 {
  vmstep;
}

