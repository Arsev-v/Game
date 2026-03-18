# MinGW-w64 Installation Guide

> **MinGW-w64** provides a GCC-based toolchain for native **Windows** development across platforms.

## 📁 **GitHub Codespaces**

**Terminal Commands:**
```bash ```
```sudo apt update && sudo apt upgrade -y```
```sudo apt install mingw-w64 gcc-mingw-w64-x86-64```
```x86_64-w64-mingw32-gcc --version```

## 🖥️ **OmarchyOS (Arch Linux based)**

**Terminal Commands:**
### Update system
sudo pacman -Syu

### Install full toolchain
sudo pacman -S mingw-w64-x86_64-toolchain

### Verify installation
x86_64-w64-mingw32-gcc --version

### Visual Package Manager:

Super + Alt + Space
Search: mingw-w64-gcc
Click Install

## 💻 **Windows (MSYS2 - Recommended)**

### First update
pacman -Syu
### Close & reopen terminal if prompted

### Install toolchain
pacman -S --needed base-devel mingw-w64-x86_64-toolchain

### Verify
gcc --version
g++ --version


## Test Compilation
echo 'int main(){return 0;}' > test.c
x86_64-w64-mingw32-gcc test.c -o test.exe
./test.exe  # Should succeed silently
