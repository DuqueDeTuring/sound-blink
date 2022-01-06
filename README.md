sound blink

Using [this LM386 sensor](https://www.waveshare.com/wiki/Sound_Sensor) connected to an Arduino, blink a led according to a sound threshold.

For my particular setup I have better results taking the average of several samples, comparing it to the previous average and then deciding if the led should be on or off. 

For your case, feel free to play with the constants.