OBJ_DIR   			= $(abspath ./build)
CSRC_DIR 			= $(abspath ./)
VSRC_DIR 			= $(abspath ./design)
NEMU_DIR 			= /home/meinie/Desktop/ics2023/nemu
TEST_DIR 			= /home/meinie/Desktop/ics2023/am-kernels/tests/cpu-tests

VERILOG_TOP 		= ./design/cpu.v
NEMUISO 			= $(NEMU_DIR)/build/riscv32-nemu-interpreter-so
VFLAGS 				= --trace --cc --exe -O3 --threads-dpi all -I$(VSRC_DIR) -Mdir $(OBJ_DIR) -DDIFF
CINC_PATH 			= -CFLAGS -I$(CSRC_DIR)/include 
CSRC 				= $(shell find $(CSRC_DIR) -name "*.cpp")
VSRC 				= $(shell find $(VSRC_DIR) -name "*.v")
VBIN 				= $(OBJ_DIR)/$(addprefix V, $(basename $(notdir $(VERILOG_TOP))))
REWRITE 			= $(abspath ./rewrite.mk)


COLOR_RED   		= \033[1;31m
COLOR_GREEN 		= \033[1;32m
COLOR_YELLOW 		= \033[33m
COLOR_NONE  		= \033[0m
include ./build.mk

