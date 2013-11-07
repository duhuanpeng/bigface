
AS := asx8051
CC := sdcc

asrc := fontascii.asm 
arel := $(asrc:.asm=.rel)

csrc := dummy.c
crel := $(csrc:.c=.rel)
casm := $(csrc:.c=.asm)

main := appmain.c



all: appmain.hex

appmain.hex: appmain.ihx
	@echo "GEN " $@
	@packihx appmain.ihx >$@ 2>/dev/null

appmain.ihx: $(arel) $(crel)
	$(CC) $(main) $^

%.rel: %.asm
	@echo "AS " $^ "->" $@
	@$(AS) -losg $<

%.rel: %.c
	@echo "CC " $^ "->" $@
	@$(CC) -c $<	

clean:
	rm -f *.lst  *.rel  *.rst  *.sym *.lnk *.ihx *.map *.mem
	rm -f $(casm) appmain.asm 
