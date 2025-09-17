@echo off
if "%~1"=="" (
    echo Uso: make-run arquivo.c ou arquivo.cpp
    exit /b
)

set file=%~1
set prog=%~n1

make %prog%
if %ERRORLEVEL%==0 (
    %prog%.exe
)
