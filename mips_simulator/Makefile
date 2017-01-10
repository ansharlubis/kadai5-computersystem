GCC = gcc

CFLAGS = -Wall -O3 -g
INCLUDE = -I./inc

BIN = ./bin
SRC = ./src
OBJ = ./obj

OBJS_GATE = $(OBJ)/path.o $(OBJ)/and_gate.o $(OBJ)/or_gate.o $(OBJ)/not_gate.o
OBJS_CIRCUIT = $(OBJ)/nand_circuit.o $(OBJ)/xor_circuit.o $(OBJ)/fa.o
OBJS_DRIVER = $(OBJS_GATE) $(OBJS_CIRCUIT) $(OBJ)/driver.o

all :
	make driver

driver : $(OBJS_DRIVER)
	$(GCC) -o $(BIN)/$@ $(OBJS_DRIVER) $(CFLAGS) $(INCLUDE)

$(OBJ)/%.o : $(SRC)/%.c
	mkdir -p $(dir $@)
	$(GCC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

clean :
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*
