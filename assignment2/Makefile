# Header Files
INCFLAGS += -I vecmath/include/

# Library Files
LINKFLAGS  = -lglut -lGL -lGLU -lfltk -lfltk_gl 
LINKFLAGS += -L vecmath/lib/ -lvecmath

CFLAGS    = -g -Wall -ansi -DSOLN
CC        = g++
SRCS      = bitmap.cpp camera.cpp MatrixStack.cpp modelerapp.cpp modelerui.cpp ModelerView.cpp Joint.cpp SkeletalModel.cpp Mesh.cpp main.cpp $(wildcard vecmath/src/*.cpp)
OBJS      = $(SRCS:.cpp=.o)
PROG      = a2

all: $(SRCS) $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LINKFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -c -o $@ $(INCFLAGS)

clean:
	rm $(OBJS) $(PROG)

bitmap.o: bitmap.h
camera.o: camera.h
Mesh.o: Mesh.h
MatrixStack.o: MatrixStack.h
modelerapp.o: modelerapp.h ModelerView.h modelerui.h bitmap.h camera.h
modelerui.o: modelerui.h ModelerView.h bitmap.h camera.h modelerapp.h
ModelerView.o: ModelerView.h camera.h
SkeletalModel.o: MatrixStack.h ModelerView.h Joint.h modelerapp.h

