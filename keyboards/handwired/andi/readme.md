
# Andis flash commands
nix-shell shell.nix

make git-submodule

# v1
qmk flash -kb handwired/andi/dactyl_manuform/5x6 --keymap andi -bl dfu-split-left
qmk flash -kb handwired/andi/dactyl_manuform/5x6 --keymap andi -bl dfu-split-right

# v2
qmk flash -kb handwired/andi/dactyl_manuform_rp/5x6 --keymap andi

# Notfall
sudo mount /dev/sdd1  /media
sudo cp handwired_dactyl_manuform_rp_5x6_andi.uf2 /media
sudo umount /dev/sdd1 

