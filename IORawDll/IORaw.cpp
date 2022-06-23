#include "pch.h"
#include "IORaw.h"

void IOReadWrite::WriteData(char* path, char* data) {
	this->fh = _open(path,
        _O_WRONLY | _O_CREAT,
        _S_IREAD | _S_IWRITE);
    if (fh == -1) { return; }
    _write(fh, data, sizeof(data));
    printf("Open succeeded on output file\n");
    _close(fh);
}