CFLAGS= -Wall
OBJS= func1.o myapp.o
TARGET = myapp

$(TARTGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(TARGET) $(OBJS)
