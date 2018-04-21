set -ve

if [[ "$PY3K" = "0" ]]; then
  3to2 -n -w $SRC_DIR/src/py/statiskit -x str
  3to2 -n -w $SRC_DIR/test -x str
fi

scons py --prefix=$PREFIX -j$CPU_COUNT

set +ve