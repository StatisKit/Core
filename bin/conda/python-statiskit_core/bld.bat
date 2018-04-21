echo ON

if "%PY3K%" == "0" (
  3to2 -n -w %SRC_DIR%\src\py\autowig -x str
  3to2 -n -w %SRC_DIR%\test -x str
)

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH%
if errorlevel 1 exit 1

echo OFF