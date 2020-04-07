from pwn import *

p = process("./quick")

for i in range(10):
	p.sendline(p.recvline())

print p.recvline()
p.close()
