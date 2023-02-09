REM This batch file will upload binary code to the NodeMCU ESP-12E.
REM The esptool.exe file and the rr_fq_scheduler.ino.bin files must
REM be in the same directory as this batch file. Also, the batch
REM file must be run from within this same directory.
REM
REM Important Note: In the line below, the COM port is set to COM18.
REM You must change that number to match the COM port of your
REM particular NodeMCU ESP-12E.
esptool.exe -vv -cd nodemcu -cb 921600 -cp COM18 -ca 0x00000 -cf rr_fq_scheduler.ino.bin
