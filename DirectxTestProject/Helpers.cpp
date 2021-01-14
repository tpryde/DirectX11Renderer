#include "stdafx.h"

char* LoadCompleteFile(const char* filename, size_t * fileSize )
{
    FILE* file;
    errno_t err = fopen_s( &file, filename, "rb" );

    char* buffer;

    if( file )
    {
        fseek( file, 0, SEEK_END );
        long size = ftell( file );
        rewind( file );

        buffer = new char[size+1];
        fread( buffer, size, 1, file );
        buffer[size] = 0;

        fclose( file );

        *fileSize = size;
        return buffer;
    }

    *fileSize = 0;
    return 0;
}

double MyGetSystemTime()
{
    SYSTEMTIME time;
    GetSystemTime( &time );

    return time.wSecond + time.wMilliseconds / 1000.0;
}
