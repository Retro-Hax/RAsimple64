#!/bin/bash

podman stop m64p
toolbox rm m64p -y
podman pull quay.io/loganmc10/m64p:latest
toolbox create --image quay.io/loganmc10/m64p m64p -y
toolbox run -c m64p echo UP
sleep 5
podman image prune -a -f
wget -q https://raw.githubusercontent.com/loganmc10/m64p/main/snap/gui/m64p.png -O ~/.local/share/icons/m64p.png
wget -q https://raw.githubusercontent.com/loganmc10/m64p/main/toolbox/m64p.desktop -O ~/.local/share/applications/m64p.desktop
chmod +x ~/.local/share/applications/m64p.desktop
