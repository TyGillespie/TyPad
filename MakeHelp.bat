@echo off
REM -- First make map file from Microsoft Visual C++ generated resource.h
echo // MAKEHELP.BAT generated Help Map file.  Used by TYPAD.HPJ. >"hlp\TyPad.hm"
echo. >>"hlp\TyPad.hm"
echo // Commands (ID_* and IDM_*) >>"hlp\TyPad.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\TyPad.hm"
echo. >>"hlp\TyPad.hm"
echo // Prompts (IDP_*) >>"hlp\TyPad.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\TyPad.hm"
echo. >>"hlp\TyPad.hm"
echo // Resources (IDR_*) >>"hlp\TyPad.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\TyPad.hm"
echo. >>"hlp\TyPad.hm"
echo // Dialogs (IDD_*) >>"hlp\TyPad.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\TyPad.hm"
echo. >>"hlp\TyPad.hm"
echo // Frame Controls (IDW_*) >>"hlp\TyPad.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\TyPad.hm"
REM -- Make help for Project TYPAD


echo Building Win32 Help files
start /wait hcw /C /E /M "hlp\TyPad.hpj"
if errorlevel 1 goto :Error
if not exist "hlp\TyPad.hlp" goto :Error
if not exist "hlp\TyPad.cnt" goto :Error
echo.
if exist Debug\nul copy "hlp\TyPad.hlp" Debug
if exist Debug\nul copy "hlp\TyPad.cnt" Debug
if exist Release\nul copy "hlp\TyPad.hlp" Release
if exist Release\nul copy "hlp\TyPad.cnt" Release
echo.
goto :done

:Error
echo hlp\TyPad.hpj(1) : error: Problem encountered creating help file

:done
echo.
