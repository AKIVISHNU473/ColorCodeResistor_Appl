#TargetName : Dependencies
#<TAB>commands

PROJ_NAME=CCR
SRC=project_main.c CCR.c test_CCR.c unity.c

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
	cppcheck --enable=all $(SRC)

dynamic_analysis: Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a project_main.c CCR.c

Clean:
	$(RM) $(call FixPath,*.out)
