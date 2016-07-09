CC ?= gcc
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gtk+-3.0)
LIBS = $(shell $(PKGCONFIG) --libs gtk+-3.0 glib.h)

SRC = today.c

OBJS = $(SRC:.c=.o)

all: today

%.o: %.c
	$(CC) -c -o $(@F) $(CFLAGS) $<

today: $(OBJS)
	$(CC) -o $(@F) $(LIBS) $(OBJS)

