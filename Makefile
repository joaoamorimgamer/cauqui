CC	:= gcc

SRCS	:= cauqui.c

TARGET	:= cauqui

PREFIX	:= /usr/local
BINDIR	:= $(PREFIX)/bin

all: $(TARGET)
	gcc -o cauqui cauqui.c

install: all
	@mkdir -p $(BINDIR)
	install -m 0755 $(TARGET) $(BINDIR)/$(TARGET)

clean:
	rm -f cauqui

.PHONY: all install clean
