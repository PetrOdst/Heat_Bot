# HeatBot
Last winter I decidet to make myself a remote controler for eberspracher car heater. I wanted to do it funny way so I designed ESP32 driven 9g servo robot that slides out of ashtray, hits the button and hide&slide back in. On TX side I went with phone and [Blynk app](https://blynk.io).

    

![This is my HeaterBot](IMG/videotogif.gif)

## Part list 

3x [6g Servo](https://www.laskakit.cz/plastove-micro-servo-sg90-9g--180/)

1x [Lily TT-call](https://www.laskakit.cz/lilygo-ttgo-t-call-v1-3-esp32-sim800l-wifi-gprs-modul/)   or [ESP32](https://www.laskakit.cz/iot-esp-32s-2-4ghz-dual-mode-wifi-bluetooth-rev-1--cp2102/) 

1x [DTH11](https://www.laskakit.cz/arduino-senzor-teploty-a-vlhkosti-vzduchu-dht11--modul/) (optional)

2x Resistor For devider (12V => 3.3V)



## Printible Parts

![this is how it should looks](https://github.com/PetrOdst/YodaHeatBot/blob/9296d73e1bdaa9fa9b6e57d5e98c530665e0479c/PrintibleParts/heatbot.jpg)

Try to keep parts orientation as shown to avoid supports usage.
In my case:

  - Layer hight 0.2
  - infill 15%
  - no supports
  - no brim

Worked  fine. 

## Instalation

Simply slide the ashtrai all the way out, disengage light cove (in lower left corner), the hole become usefull later for power wires. Fix the rach printed part to the midle of the ashtray drore hole. Make shure to place the lower part facing out. 

## App 

I came out with Blynk app, because it was the easyest and fastest solution. I never shared the app setting before, so let me know if it works.  

1. Download Blynk app [here](http://www.blynk.cc/appdownloads)
2. Scan this QR code
3. Enjoy my app!

![QR code](IMG/qrapka.png)
Made by [Hodinový Maker](http://www.hodinovy-maker.cz)
