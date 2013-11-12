AS := asx8051
CC := sdcc

# asm source list
asrc := 8051.asm
# end of asm

# C source
csrc := dummy.c
#end of C source

include src.mk

arel := $(asrc:.asm=.rel)
crel := $(csrc:.c=.rel)

casm := $(csrc:.c=.asm)

main := appmain.c


.PHONY: all
all: appmain.hex

appmain.hex: appmain.ihx
	@echo "GEN " $@
	@packihx appmain.ihx >$@ 2>/dev/null

appmain.ihx: $(main) $(arel) $(crel)
	@$(CC) $^
	@echo "CC " $^

%.rel: %.asm
	@echo "AS " $^ "->" $@
	@$(AS) -losg $<

%.rel: %.c
	@echo "CC " $^ "->" $@
	@$(CC) -c $< -o $@

clean:
	rm -f *.lst  *.rel  *.rst  *.sym *.lnk *.ihx *.map *.mem
	rm -f $(casm) appmain.asm 

