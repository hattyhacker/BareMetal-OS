# BareNaked OS

> *A fork of BareMetal OS, au naturale.*

64-bit assembly. Some C. Good ol-fashioned raunchy fun. Builds on Linux (shame, I know).

<img src="https://raw.githubusercontent.com/ReturnInfinity/BareNaked-OS/master/doc/ScreenShot.png"></img>

## Prerequisites

The scripts in this repo depend on a Debian-based Linux system like [Ubuntu](https://www.ubuntu.com/download/desktop) or [Elementary](https://elementary.io). macOS is also supported to build and test the OS and Assembly applications if you are using [Homebrew](https://brew.sh).

- [NASM](https://nasm.us) - Assembly compiler to build the loader and kernel, as well as the apps written in Assembly.
- [QEMU](https://www.qemu.org) - Computer emulator if you plan on running the OS for quick testing.
- [GCC](https://gcc.gnu.org) - C compiler for building C/C++ applications.
- [Git](https://git-scm.com) - Version control software for pulling the source code from GitHub.

In a Debian-based Linux distro this can be completed with the following command:

	sudo apt install nasm qemu-system-x86 gcc git


## Summary

BareNaked OS consists of modifications of several different, epic projects:

- [Pure64](https://github.com/ReturnInfinity/Pure64) - The boot sector and software loader. Pure64 is responsible for getting the computer into a clean 64-bit state on boot up.
- [BareNaked](https://github.com/ReturnInfinity/BareMetal) - The kernel.
- [Monitor](https://github.com/ReturnInfinity/BareMetal-Monitor) - A simple command line interface.
- [BMFS](https://github.com/ReturnInfinity/BMFS) - The BareMetal File System utility.
- [BareNaked-Demo](https://github.com/ReturnInfinity/BareMetal-Demo) - Various test/example programs.


## Initial configuration

	git clone https://github.com/hattyhacker/BareNaked-OS.git
	cd BareNaked-OS
	./setup.sh

`make.sh` automatically runs the build and install scripts for BareNaked OS. `setup.sh` is a leftover from the original BareMetal OS project. Once the setup is complete you can execute the run.sh script to verify that everything installed correctly.


## Rebuilding the source code

`./build.sh` or `./make.sh`


## Installing the system to the disk image

	./install.sh monitor.bin

This command installs the boot sector, loader (Pure64), kernel, and simple command line interface (Monitor) to the disk image.


## Installing the demos to the disk image

	./install-demos.sh

This command installs the various test/example programs to the disk image.


## Test the install with QEMU

	./run.sh


## Test the install with Bochs

Bochs does not support SATA drives so this is only useful for debugging the kernel. You will need `bochs` and `bochs-x` installed.

	bochs -f bochs.cfg


## Build a VMDK disk image for VMware

	./vmdk.sh


## Build a VDI disk image for VirtualBox

	./vdi.sh

The VDI script rewrites the disk ID of the VDI file to avoid the disk warning in VirtualBox.



// EOF
