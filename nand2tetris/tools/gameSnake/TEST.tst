load,  // Load all the VM files from the current directory
set sp 261,
repeat 10000000000 {
  vmstep;
}