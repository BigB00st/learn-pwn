from pwn import *

p = process("./hex")

payload = str(0xdeadbeef)

p.sendline(payload)
print p.recvline()

p.close()