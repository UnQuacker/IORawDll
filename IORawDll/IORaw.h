#include <iostream>
#include <stdio.h>  
#include <conio.h>  
#include <io.h>  
#include <string.h>  
#include <stdlib.h>  
#include <fcntl.h>

class IOReadWrite {
private:
	int fh;
protected: 
	char* path;
public:
	IOReadWrite() = default;
	void WriteData(char* path, char* data);
};

extern "C" __declspec(dllexport) void* Create() {
	return (void*) new IOReadWrite();
}

extern "C" __declspec(dllexport) void TestWrite(IOReadWrite * IOReadWriteClass, char* path, char* data) {
	IOReadWriteClass->WriteData(path, data);
}
