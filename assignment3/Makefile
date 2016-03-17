# Header Files
INCFLAGS = -I vecmath/include/

# Library Files
LINKFLAGS  = -lglut -lGL -lGLU -lfltk -lfltk_gl 
Linkflags += -L vecmath/lib/ -lvecmath
LINKFLAGS += -L vecmath/lib/ -lRK4

CFLAGS    = -g -Wall -ansi -DSOLN
CC        = g++

SRCS      = $(wildcard *.cpp)
SRCS     += $(wildcard vecmath/src/*.cpp)
OBJS      = $(SRCS:.cpp=.o)
PROG      = a3

all: $(SRCS) $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LINKFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -c -o $@ $(INCFLAGS)

clean:
	rm $(OBJS) $(PROG)
