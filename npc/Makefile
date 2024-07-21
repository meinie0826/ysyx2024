RESULT = .result
$(shell > $(RESULT))

Makefile.%: /home/meinie/Desktop/ics2023/am-kernels/tests/cpu-tests/tests/%.c
	@/bin/echo -e "APP = $(notdir $*)\ninclude /home/meinie/Desktop/ysyx2024/npc/builddir.mk " > $@
	@if make -s -f $@ run; then \
		printf "[%14s] $(COLOR_GREEN)PASS$(COLOR_NONE)\n" $* >> $(RESULT); \
	else \
		printf "[%14s] $(COLOR_RED)***FAIL***$(COLOR_NONE)\n" $* >> $(RESULT); \
	fi
	-@rm -f Makefile.$*

ALL = $(basename $(notdir $(shell find /home/meinie/Desktop/ics2023/am-kernels/tests/cpu-tests/tests/. -name "*.c")))

all:$(addprefix Makefile., $(ALL))

gen: all
	@cat $(RESULT)
	@rm $(RESULT)

name: 
	@echo "$(all)"
	

-include /home/meinie/Desktop/ysyx2024/npc/builddir.mk 