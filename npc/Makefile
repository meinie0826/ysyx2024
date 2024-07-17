VSRCS = design/alu.v
VSRCS += design/controller.v
VSRCS += design/data_mem.v
VSRCS += design/id.v
VSRCS += design/imm.v
#VSRCS += design/instruction_mem.v
VSRCS += design/mux_2.v
VSRCS += design/mux_2_5.v
VSRCS += design/mux_3.v
VSRCS += design/next_pc.v
VSRCS += design/pc.v
VSRCS += design/reg_file.v

run:
	verilator  --cc --exe --build --trace --timing -j cpu.cpp cpu.v $(VSRCS)
	./obj_dir/Vcpu $(ARGS)

test:
	verilator  --cc --exe --build --trace --timing -j cpu.cpp cpu.v $(VSRCS)
	./obj_dir/Vcpu /home/meinie/Desktop/ysyx2024/npc/dummy-riscv32e-npc.bin


clean:
	rm -rf ./obj_dir