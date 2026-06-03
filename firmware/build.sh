#!/bin/bash

IMAGE="hands-qmk:latest"

if ! docker image inspect "${IMAGE}" > /dev/null 2>&1; then
    echo "Image ${IMAGE} not found. Building ${IMAGE}..."
    docker build -t "${IMAGE}" .
else
    echo "Image ${IMAGE} already exists. Skipping docker build."
fi

KEYBOARD="hands"

case "${1:-qwerty-jis}" in
    qwerty-jis)
	echo "Building a firmware with qwerty-jis keymap..."
	KEYMAP="qwerty-jis"
	;;
    onishi-us)
	echo "Building a firmware with onishi-us keymap..."
	KEYMAP="onishi-us"
	;;
    onishi-jis)
	echo "Building a firmware with onishi-jis keymap..."
	KEYMAP="onishi-jis"
	;;
    *)
	echo "Invalid keymap: $2"
	echo "Falling back to build a firmware with qwerty-jis keymap..."
	KEYMAP="qwerty-jis"
	;;
esac

docker run --rm -it \
    -v ./src:/qmk_firmware/keyboards/$KEYBOARD \
    -v ./output:/qmk_firmware/.build \
    $IMAGE \
    /bin/bash \
    -c "
	qmk compile -kb $KEYBOARD -km $KEYMAP &&
	chown -R $(id -u):$(id -g) .build/
    "

