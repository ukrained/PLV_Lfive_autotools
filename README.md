# PROJECT 'CALCULUS'

## Description
The "main" program performs simple arithmetic calculations. User has to input desired action (among available) and put two numbers on demand after that. Following actions are available for now:

| Action | Description             |
| ------ | ----------------------- |
| \+     | add  A with B           |
| \-     | substract B from A      |
| \*     | multiply A by B         |
|  /     | divide A by B           |
|  x     | exit                    |

## How to install
After you get the tarball, you may install this program on your system. Follow instructions below.

#### Step 1. Unpack tarball and get into the unpacked directory:
```
tar -xf main-0.1.tar.gz
cd  main-0.1
```
#### Step 2. Generate Makefile specific for your system:
```
./configure
```
#### Step 3. Run make to build your program:
```
make
```
#### Step 4. Install program on your system:
```
sudo make install
```
#### Step 5. After all, in case you need to uninstall this program, run the command:
```
sudo make clean-all
```

> [!IMPORTANT]
> Steps 4 and 5 work with ```/usr/local/bin```. So they should run under the root privileges (e.g. with ```sudo```).

## For maintainers
When making changes in the project, do not forget to update the package for distibution. For that follow the commands below when your changes are ready-to-go:

```
aclocal # initiate autotools environment
autoconf # generate configure binary
automake --add-missing # generate Makefile.in & add missing scripts

./configure # makes Makefile out of Makefile.in

make # build the program

make distcheck # creates tarball for distribution.
```


## Out contacts
In case of emergency you may contact us via:
> E-mail: echo@laptop.com
