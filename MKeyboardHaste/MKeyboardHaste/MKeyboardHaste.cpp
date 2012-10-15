// MKeyboardHaste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>

// from Mud's post here http://stackoverflow.com/questions/171326/how-can-i-increase-the-key-repeat-rate-beyond-the-oss-limit
    
BOOL parseDword(const TCHAR * in, DWORD * out)
{
    TCHAR * end;
    long result = _tcstol(in, &end, 10);
    BOOL success = (errno == 0 && end != in);
    if (success)
    {
    	*out = result;
    }
    return success;
}

int _tmain(int argc, _TCHAR* argv[])
{
    FILTERKEYS keys = { sizeof(FILTERKEYS) };
    
    if (argc == 1)
    {
        puts ("No parameters given: disabling.");
    }
    else if (argc != 3)
    {
        puts("MKeyboardHaste    (c) 2012 M. Rochel");
		puts("Allows you to set your keyboard speed more flexible than windows' system");
		puts("settings.");
		puts("Usage: MKeyboardHaste [delay] [repeat]");
		puts("       delay    initial delay in ms from key press down until the key input");
		puts("                gets repeated");
		puts("       repeat   repeat rate in ms after the initial delay");
		puts("Call with no parameters to disable it.");
		puts("Note: You have to set this again after a reboot. I suggest putting it in your");
		puts("autostart.");
        return 0;
    }
    else if (parseDword(argv[1], &keys.iDelayMSec) 
            && parseDword(argv[2], &keys.iRepeatMSec))
    {
        printf("Setting keyrate: delay: %i, rate: %i\n", (int)keys.iDelayMSec, (int)keys.iRepeatMSec);
        keys.dwFlags = FKF_FILTERKEYSON|FKF_AVAILABLE;
    }
    
    if (!SystemParametersInfo (SPI_SETFILTERKEYS, 0, (LPVOID) &keys, 0))
    {
        fprintf (stderr, "System call failed.\nUnable to set keyrate.");
    }
    
	return 0;
}

