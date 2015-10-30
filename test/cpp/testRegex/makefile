CC = gcc 
CFLAGS = -g -Wall 
TARGET = regexp
EXECOBJS = ${TARGET}.o
$(TARGET): $(EXECOBJS) 
	$(CC) $(CFLAGS) -o $(TARGET) $(EXECOBJS) 
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	rm -rf *.o *.a *.so $(TARGET)
