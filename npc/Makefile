
TCS := two_ctrl_switch

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe --build ./csrc/$(TCS).cpp ./vsrc/$(TCS).v --trace

clean: 
	$(RM) ./obj_dir/*

include ../Makefile
