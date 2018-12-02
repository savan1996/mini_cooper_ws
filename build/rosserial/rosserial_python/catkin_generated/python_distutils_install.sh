#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/mir-lab/mini_cooper_ws/src/rosserial/rosserial_python"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/mir-lab/mini_cooper_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/mir-lab/mini_cooper_ws/install/lib/python2.7/dist-packages:/home/mir-lab/mini_cooper_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/mir-lab/mini_cooper_ws/build" \
    "/usr/bin/python" \
    "/home/mir-lab/mini_cooper_ws/src/rosserial/rosserial_python/setup.py" \
    build --build-base "/home/mir-lab/mini_cooper_ws/build/rosserial/rosserial_python" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/mir-lab/mini_cooper_ws/install" --install-scripts="/home/mir-lab/mini_cooper_ws/install/bin"
