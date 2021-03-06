*Do you want to make game on LED matrix?*
# Make game on LED matrix
this repository can create a game on led matrix by adding some code.

Please feel free to open an issue or a pull-request if you have any idea to make it better. :)

> If you want a make game in windows, please see [hi-engine-2](https://github.com/BudlePlay/Hi-Engine2)  


## How to use
This repository is tested on Windows10, Visual studio 2019, Raspberry Pi 4.  

1. download visual studio and install iot and linux plugin.  
2. open *Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi.sln*
3. connect raspberry pi 
4. build and run

> We plan to support cmake.


## Electric Circuit
### joystick, button
<img src="imgs/gpio-input.png" height="150">  

### LED matrix 
<img src="imgs/gpio-matrix.png" height="150">   

[LED matrix docs](https://learn.adafruit.com/32x16-32x32-rgb-led-matrix)  
[Raspberry pi GPIO docs](https://www.raspberrypi.org/documentation/usage/gpio/)  


### [Hardware](hardware/)
There is a drawing of the LED matrix stand and prop using fusion360.  

### SW pull up setting
if use joystick or button, need sw pull up setting in raspberry pi 4.  
```sh
git clone https://github.com/WiringPi/WiringPi.git
cd WiringPi/
./build
raspi-gpio set 9 pu
raspi-gpio set 10 pu
raspi-gpio set 27 pu
raspi-gpio set 22 pu
raspi-gpio set 2 pu
raspi-gpio set 3 pu
raspi-gpio set 4 pu
raspi-gpio set 17 pu 
sudo gpio readall
```

## Demo
![Complete](imgs/Complete.gif)  
<img src="imgs/Complete.jpg" height="400">  

[https://www.youtube.com/watch?v=Fkds48xTplY](https://www.youtube.com/watch?v=Fkds48xTplY)  
![DemoGame](imgs/DemoGame.gif)  


### Tech use in the demo
- C++
- LED Matrix 
- Raspberry Pi 4
- Fusion 360 [[link](hardware/)]
- 3d Printer
- Laser cutting machine

### Buy list
- [LED matrix](https://www.devicemart.co.kr/goods/view?no=1360878)  
- [Joy stick](https://www.devicemart.co.kr/goods/view?no=13152308)
- [Game switch](https://www.devicemart.co.kr/goods/view?no=1376727)
- Acrylic sheet 3t
  
## Reference
[HiEngine2](https://github.com/BudlePlay/Hi-Engine2)

## Contributors
[Songs](https://github.com/SHSongs)  
[kyh](https://github.com/1q2f3d)