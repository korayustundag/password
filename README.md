# Random Password Generator
Cross-platform Random Password Generator
## Supported Platforms
- Windows [Native/Python]
- Linux [Native/Python]
- MacOS [Python]
## Download
You can download the latest version from the [Releases](https://github.com/korayustundag/password/releases) page.
## Build From Source
### Requirements
- Windows
	- Visual Studio 2022 or Python
- Linux
	- Clang(LLVM) or Python3
	- Make
- MacOS
	- Python
### Windows (VS)
- Open ```src\C++\Password.sln``` in Visual Studio
- Set configuration to Release and x64
- Solution Explorer > Solution 'Password' > Build Solution
### Windows (PY)
- Just double click the ```src\Python\Build.bat```
### Linux (Clang)
- Go to ```src/C++```
- Run ```make```
### Linux (PY)
- Go to ```src/Python```
- Run ```make```
### MacOS (PY)
- Go to ```src/Python```
- Run ```python3 -m compileall Password.py```
## Usage
### Windows
- Just run the ```Password.exe```
### Linux
- Just run the ```./password```
### MacOS
- ```python3 Password.pyc```
